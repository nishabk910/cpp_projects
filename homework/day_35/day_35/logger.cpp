#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;


class Job {
public:
    int jobID;
    int executionTime; 
    int priority;      

    Job(int id, int time, int prio)
        : jobID(id), executionTime(time), priority(prio) {}

   
    static bool compareByID(const Job& a, const Job& b)
    {
        return a.jobID < b.jobID;
    }

   
    static bool compareByPriority(const Job& a, const Job& b)
    {
        return a.priority > b.priority;
    }
};


enum LogLevel { INFO, DEBUG, WARNING, ERROR };

class Logger {
private:
    vector<string> logLines;

public:
    void log(LogLevel level, const string& message);
    void exportLog(const string& filename);
};

void Logger::log(LogLevel level, const string& message)
{
    string str;
    switch (level)
    {
    case INFO: str = "[INFO] "; 
        break;
    case DEBUG: str = "[DEBUG] ";
        break;
    case WARNING: str = "[WARNING] ";
        break;
    case ERROR: str = "[ERROR] ";
        break;
    }
    string logMsg = str + message;
    logLines.push_back(logMsg);
    cout << logMsg << endl;
}

void Logger::exportLog(const string& filename)
{
    ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "[INFO] JobChain Execution Log\n";
        outFile << "----------------------------------------\n";
        for (const string& line : logLines)
        {
            outFile << line << "\n";
        }
        outFile.close();
    }
    else {
        log(ERROR, "Could not write log to file.");
    }
}


class JobScheduler
{
private:
    vector<Job> jobs;
    Logger* logger;
    int totalTime = 0;

public:
    JobScheduler(Logger* logger);
    bool loadJobsFromFile(const string& filename);
    void fifoScheduling();
    void priorityScheduling();
    int getTotalTime() const;
};


JobScheduler::JobScheduler(Logger* logger) : logger(logger) {}

bool JobScheduler::loadJobsFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        logger->log(ERROR, "File could not be opened.");
        return false;
    }
    jobs.clear();   
    totalTime = 0;

    int id, time, priority;
    while (file >> id >> time >> priority) {
        jobs.push_back(Job(id, time, priority));
    }

    logger->log(INFO, "Successfully loaded " + to_string(jobs.size()) + " jobs.");
    return true;
}

void JobScheduler::fifoScheduling()
{
    queue<Job> jobQueue;

    sort(jobs.begin(), jobs.end(), Job::compareByID);

    for (const auto& job : jobs) {
        jobQueue.push(job);
    }

    logger->log(DEBUG, "Starting FIFO Scheduling...");

    while (!jobQueue.empty()) {
        Job current = jobQueue.front();
        jobQueue.pop();

        logger->log(DEBUG, "Executing Job ID: " + to_string(current.jobID) +
            " | Priority: " + to_string(current.priority));

        this_thread::sleep_for(chrono::milliseconds(current.executionTime));
        totalTime += current.executionTime;
    }

    logger->log(INFO, "All jobs executed in " + to_string(totalTime) + "ms.");
}

void JobScheduler::priorityScheduling()
{
    sort(jobs.begin(), jobs.end(), Job::compareByPriority);

    logger->log(DEBUG, "Sorted jobs by priority...");

    for (const auto& job : jobs) {
        logger->log(DEBUG, "Executing Job ID: " + to_string(job.jobID) +
            " | Priority: " + to_string(job.priority));

        this_thread::sleep_for(chrono::milliseconds(job.executionTime));
        totalTime += job.executionTime;
    }

    logger->log(INFO, "All jobs executed in " + to_string(totalTime) + "ms.");
}

int JobScheduler::getTotalTime() const {
    return totalTime;
}


int main() 
{
    Logger logger;
    JobScheduler scheduler(&logger);

    void (JobScheduler:: * scheduleFunc)() = nullptr;

    while (true) {
        cout << "\n==== JobChain Scheduler ====\n";
        cout << "1. Load jobs from file\n";
        cout << "2. Choose scheduling algorithm\n";
        cout << "   a. FIFO (Job ID)\n";
        cout << "   b. Priority-based\n";
        cout << "3. Run selected scheduler\n";
        cout << "4. Export log\n";
        cout << "5. Exit\n> ";

        string input;
        getline(cin, input);

        if (input == "1") {
            scheduler.loadJobsFromFile("jobs.txt");
        }
        else if (input == "2a") {
            logger.log(INFO, "Selected FIFO Scheduling.");
            scheduleFunc = &JobScheduler::fifoScheduling;
        }
        else if (input == "2b") {
            logger.log(INFO, "Selected Priority Scheduling.");
            scheduleFunc = &JobScheduler::priorityScheduling;
        }
        else if (input == "3") {
            if (scheduleFunc) {
                (scheduler.*scheduleFunc)();
            }
            else {
                logger.log(WARNING, "Please select a scheduling strategy first.");
            }
        }
        else if (input == "4")
        {
            logger.exportLog("job_log.txt");
        }
        else if (input == "5")
        {
            break;
        }
        else {
            logger.log(WARNING, "Invalid input.");
        }
    }

    return 0;
}


