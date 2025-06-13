#include<iostream>
#include<thread>
#include<string>
#include<sstream>
#include<chrono>
#include<fstream>
#include<mutex>
#include<vector>
#include<map>

using namespace std;
mutex mtx;


enum logLevel {
    INFO = 0,
    DEBUG,
    WARNING,
    ERROR
};


class Logger {
    ofstream logFile;

public:
    Logger(const char* filename)
    {
        try {
            logFile.open(filename, ios::app);
            if (!logFile.is_open())
                throw "Log File cannot be opened.";
        }
        catch (const char* s)
        {
            cout << "Error: " << s << endl;
            exit(0);
        }
    }

    const char* levelToString(int l) {
        switch (l) {
        default: return "UNKNOWN";
        case INFO: return "INFO";
        case DEBUG: return "DEBUG";
        case WARNING: return "WARNING";
        case ERROR: return "ERROR";
        }
    }

    void log(int level, const char* message) {
        lock_guard<mutex> lock(mtx);
        logFile << "[" << levelToString(level) << "] " << message << endl;
    }
};


class User {
private:
    map<string, string> users;
    const string userFile = "calllog.txt";

    void loadUsers()
    {
        ifstream in(userFile);
        string u, p;
        while (in >> u >> p) 
        {
            users[u] = p;
        }
        in.close();
    }

    void saveUser(const string& username, const string& password) 
    {
        ofstream out(userFile, ios::app);
        out << username << " " << password << endl;
        out.close();
    }

public:
    User() {
        loadUsers();
    }

    bool signUp(Logger& logger)
    {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (users.find(username) != users.end()) 
        {
            logger.log(WARNING, "Username already exists");
            return false;
        }

        users[username] = password;
        saveUser(username, password);
        logger.log(INFO, "User signed up successfully");
        return true;
    }

    bool login(Logger& logger) {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (users.find(username) != users.end() && users[username] == password) {
            logger.log(INFO, "Login successful");
            return true;
        }

        logger.log(ERROR, "Invalid login attempt");
        return false;
    }
};


class Customer {
private:
    string brand;
    int inVoicein, outVoicein, inVoiceout, outVoiceout;
    int insmsin, outsmsin, insmsout, outsmsout;
    int mbDownload, mbUpload;

public:
    Customer() : inVoicein(0), outVoicein(0), inVoiceout(0), outVoiceout(0),
        insmsin(0), outsmsin(0), insmsout(0), outsmsout(0), mbDownload(0), mbUpload(0) {}

    void setBrand(const string& b) { brand = b; }
    string getBrand() const { return brand; }

    void addInVoiceIn(int duration)
    { inVoicein += duration; }
    void addOutVoiceIn(int duration)
    
    { outVoicein += duration; }
    void addInVoiceOut(int duration) 
    { inVoiceout += duration; }
    void addOutVoiceOut(int duration)
    { outVoiceout += duration; }
    void addInSMSIn(int count = 1) 
    { insmsin += count; }
    void addOutSMSIn(int count = 1)
    { outsmsin += count; }
    void addInSMSOut(int count = 1) 
    { insmsout += count; }
    void addOutSMSOut(int count = 1) 
    { outsmsout += count; }
    void addMBdownload(int mb) 
    { mbDownload += mb; }
    void addMBupload(int mb) 
    { mbUpload += mb; }

    void billingInfo(const string& msisdn) const {
        cout << "Customer ID: " << msisdn << " (" << brand << ")\n";
        cout << "Service within mobile operator:\n";
        cout << "  Incoming voice call duration: " << inVoicein << "\n";
        cout << "  Outgoing voice call duration: " << outVoicein << "\n";
        cout << "  Incoming SMS: " << insmsin << "\n";
        cout << "  Outgoing SMS: " << outsmsin << "\n";
        cout << "Service outside mobile operator:\n";
        cout << "  Incoming voice call duration: " << inVoiceout << "\n";
        cout << "  Outgoing voice call duration: " << outVoiceout << "\n";
        cout << "  Incoming SMS: " << insmsout << "\n";
        cout << "  Outgoing SMS: " << outsmsout << "\n";
        cout << "Internet:\n";
        cout << "  MB Downloaded: " << mbDownload << ", MB Uploaded: " << mbUpload << "\n";
    }
};


class CDR {
private:
    string msisdn;
    string operatorBrand;
    string operator_MCCMNC;
    string callType;
    int duration;
    double download;
    double upload;
    string thirdparty_MSISDN;
    string thirdpartyoperator_MSISDN;

public:
    CDR(const string& line) {
        stringstream ss(line);
        getline(ss, msisdn, '|');
        getline(ss, operatorBrand, '|');
        getline(ss, operator_MCCMNC, '|');
        getline(ss, callType, '|');
        ss >> duration;
        ss.ignore(1, '|');
        ss >> download;
        ss.ignore(1, '|');
        ss >> upload;
        ss.ignore(1, '|');
        getline(ss, thirdparty_MSISDN, '|');
        getline(ss, thirdpartyoperator_MSISDN);
    }
};


int main() {
    Logger logger("calllog.txt");
    User u;

    int choice;
    cout << "1. Sign Up\n2. Login\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
        u.signUp(logger);
    else if (choice == 2)
        u.login(logger);
    else
        cout << "Invalid choice\n";

    return 0;
}






