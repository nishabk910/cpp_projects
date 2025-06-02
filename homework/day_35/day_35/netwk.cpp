#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

class Logger
{
    vector<string> logs;
public:
    void log(LogLevel level, const string& msg)
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
        string fullMsg = str + msg;
        logs.push_back(fullMsg);
        cout << fullMsg << "\n";
    }

    void exportLog(const string& filename)
    {
        ofstream out(filename);
        if (!out) {
            log(ERROR, "Cannot open log file for writing.");
            return;
        }
        for (const auto& line : logs) out << line << "\n";
        log(INFO, "Logs saved to " + filename);
    }
};

struct Packet {
    int id;
    string protocol;
    int size;
    Packet(int i, string p, int s) : id(i), protocol(move(p)), size(s) {}
};

class NetMon {
    vector<Packet> packets;
    Logger& logger;
public:
    NetMon(Logger& log) : logger(log) {}

    bool loadPackets(const string& filename)
    {
        ifstream file(filename);
        if (!file)
        {
            logger.log(ERROR, "Failed to open file " + filename);
            return false;
        }

        packets.clear();
        string line;
        int lineNum = 0;

        while (getline(file, line))
        {
            lineNum++;
            istringstream iss(line);
            int id, size;
            string proto;
            if (!(iss >> id >> proto >> size))
            {
                logger.log(ERROR, "Malformed line " + to_string(lineNum));
                continue;
            }
            if (proto != "TCP" && proto != "UDP" && proto != "ICMP")
            {
                logger.log(ERROR, "Unknown protocol '" + proto + "' at line " + to_string(lineNum));
                continue;
            }
    
            packets.push_back(Packet(id, proto, size));
        }
        logger.log(INFO, "Loaded " + to_string(packets.size()) + " packets.");
        return true;
    }

    void filterByProtocol(const string& protocol) {
        bool found = false;
        for (size_t i = 0; i < packets.size(); ++i) {
            const Packet& p = packets[i];
            if (p.protocol == protocol)
            {
                logger.log(DEBUG, "Packet " + to_string(p.id) + " | " + p.protocol + " | " + to_string(p.size) + " bytes");
                found = true;
            }
        }
        if (!found)
            logger.log(WARNING, "No packets found with protocol " + protocol);
    }

    void checkLargePackets() 
    {
        bool found = false;
        for (size_t i = 0; i < packets.size(); ++i)
        {
            const Packet& p = packets[i];
            if (p.size > 1000)
            {
                logger.log(WARNING, "Packet " + to_string(p.id) + " | " + p.protocol + " | " + to_string(p.size) + " bytes");
                found = true;
            }
        }
        if (!found)
            logger.log(INFO, "No packets exceed size threshold");
    }
};

int main()
{
    Logger logger;
    NetMon netmon(logger);

    while (true)
    {
        cout << "\n==== NetMon Packet Monitor ====\n"
            << "1. Load packet data\n"
            << "2. Filter by protocol (TCP, UDP, ICMP)\n"
            << "3. Check for large packets\n"
            << "4. Export log\n"
            << "5. Exit\n> ";

        string ip;
        getline(cin, ip);

        if (ip == "1") {
            netmon.loadPackets("packets.txt");
        }
        else if (ip.size() > 2 && ip.substr(0, 2) == "2 ")
        {
            string protocol = ip.substr(2);
            if (protocol == "TCP" || protocol == "UDP" || protocol == "ICMP")
                netmon.filterByProtocol(protocol);
            else
                logger.log(WARNING, "Invalid protocol. Use TCP, UDP, or ICMP");
        }
        else if (ip == "3")
        {
            netmon.checkLargePackets();
        }
        else if (ip == "4")
        {
            logger.exportLog("netmon_log.txt");
        }
        else if (ip == "5")
        {
            break;
        }
        else
        {
            logger.log(WARNING, "Invalid input.");
        }
    }
    return 0;
}
