#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <ctime>
#include <thread>
#include <string>
#include <algorithm>

using namespace std;

enum LoggingLevel {
    INFO,
    DEBUG,
    WARNING,
    ERROR,
};

class Logger {
    ofstream fileOut;
public:
    Logger(const char* f1)
    {
        try {
            fileOut.open(f1, ios::app);
            if (!fileOut.is_open()) {
                throw "Error opening file";
            }
        }
        catch (const char* s) {
            cout << s << endl;
            exit(0);
        }
    }

    const char* logtostring(int level) 
    {
        switch (level) {
        case INFO: return "INFO";
        case DEBUG: return "DEBUG";
        case WARNING: return "WARNING";
        case ERROR: return "ERROR";
        default: return "UNKNOWN";
        }
    }

    void log(int level, const char* str)
    {
        fileOut << "[" << logtostring(level) << "] " << str << endl;
    }
};

class Job
{
private:
    int jobId;
    int executionTime;
    int priority;

public:
    void setId(int JobId) {
        this->jobId = JobId;
    }

    int getId() const {
        return jobId;
    }

    void setExecTime(int execTime) {
        this->executionTime = execTime;
    }

    int getExecTime() const {
        return executionTime;
    }

    void setPriority(int prio) {
        this->priority = prio;
    }

    int getPriority() const
    {
        return priority;
    }

    void displayJob() const 
    {
        cout << "Job ID: " << jobId << endl;
        cout << "Execution Time: " << executionTime << "ms" << endl;
        cout << "Priority: " << priority << endl;
    }

    int executeJob(Logger& ob) const
    {
        auto start = chrono::system_clock::now();
        this_thread::sleep_for(chrono::milliseconds(executionTime));
        auto end = chrono::system_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
        char msg[100];
        sprintf(msg, "Executing Job ID: %d | Priority: %d | ExecTime %dms", jobId, priority, duration.count());
        ob.log(DEBUG, msg);
        return duration.count();
    }
};

bool compareByPriority(const Job& a, const Job& b) 
{
    return a.getPriority() < b.getPriority();
}

class Queue
{
    vector<Job> arr;
    int totalTime;
    bool isPriority;

public:
    Queue() 
    {
        totalTime = 0;
        isPriority = false;

        ifstream inFile;
        try {
            inFile.open("job.txt", ios::in);
            if (!inFile.is_open()) {
                throw "File cannot be opened";
            }

            Job j;
            int id, execTime, priority;
            while (inFile >> id >> execTime >> priority) {
                j.setId(id);
                j.setExecTime(execTime);
                j.setPriority(priority);
                arr.push_back(j);
            }
        }
        catch (const char* s) {
            cout << s << endl;
            exit(0);
        }
    }

    void sortPriority() {
        sort(arr.begin(), arr.end(), compareByPriority);
    }

    void executeQueue(Logger& ob) {
        if (isPriority)
        {
            sortPriority();
        }
        for (const auto& job : arr)
        {
            totalTime += job.executeJob(ob);
        }
    }

    int getTotTime() const {
        return totalTime;
    }

    void setPriority(bool flag)
    {
        isPriority = flag;
    }
};

int main() {
    Queue q;
    Logger l("job_log.txt");

    while (1) {
        cout << "\n===== Jobchain Scheduler =====" << endl;
        cout << "1. Load jobs from file" << endl;
        cout << "2. Choose scheduling algorithm" << endl;
        cout << "   a. FIFO (by Job ID)" << endl;
        cout << "   b. Priority Based" << endl;
        cout << "3. Execute Jobs" << endl;
        cout << "4. Export Log" << endl;
        cout << "5. Exit" << endl;

        int opt;
        cin >> opt;

        char msg[100], alg;
        switch (opt)
        {
        default:
            break;
        case 1:
            l.log(INFO, "Successfully loaded jobs from file");
            break;
        case 2:
            cin >> alg;
            if (alg == 'b') {
                q.setPriority(true);
                l.log(INFO, "Priority scheduling selected");
            }
            else {
                l.log(INFO, "FIFO scheduling selected");
            }
            break;
        case 3:
            q.executeQueue(l);
            sprintf(msg, "All jobs executed in %dms", q.getTotTime());
            l.log(INFO, msg);
            break;
        case 4:
            l.log(INFO, "Log saved to job_log.txt");
            break;
        case 5:
            exit(0);
        }
    }

    return 0;
}

