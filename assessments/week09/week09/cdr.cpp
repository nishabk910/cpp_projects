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

enum logLevel
{
	INFO = 0,
	DEBUG,
	WARNING,
	ERROR
};
class Logger
{
	ofstream logFile;

public:
	Logger(const char* filename)
	{
		try
		{
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

	const char* levelToString(int l)
	{
		switch (l)
		{
		default:
			return "UNKNOWN";
		case INFO:
			return "INFO";
		case DEBUG:
			return "DEBUG";
		case WARNING:
			return "WARNING";
		case ERROR:
			return "ERROR";
		}
	}

	void log(int level, const char* message)
	{
		logFile << "[" << levelToString(level) << "] " << message << endl;
	}
	

};

class user
{
private:
	map<string, string>users;
	const string userFile = "calllog.txt";
	void loadUser()
	{
		ifstream in(userFile.c_str());
		string u, p;
		while (cin >> u >> p)
		{
			users[u] = p;
		}
		in.close();
	}

	void saveUser(const string& username, const string& password)
	{
		ofstream out(userFile.c_str());
		cout << username << "" << password << endl;
		out.close();
	}

public:
	user()
	{
		loadUser();
	}

	bool signUp
	{
		string username, password;

	cout << "enter username:";
		cin >> username;
		cout << "enter password:";
		cin >> password;

		if (user.find(user) != user.end())
		{
			log(WARNING"user enter valid info");
			return false;
		}

		user[username] = password;

		saveUser(username, password);
		log(INFO, "sign in");
		return true;

		bool login
		{
			string username,password;
		cout << "enter username:";
		cin >> username;
		cout << "enter password:";
		cin >> password;
		if (user.find(user) != user.end() && user[user] = password)
		{
			log(INFO, "login successful");
			return true;
		}
		log(FATAL, "invalid info");
		return false;
		}
	};


	class customer
	{
	private:
		string brand;

		int inVoicein;
		int outVoicein;
		int inVoiceout;
		int outVoiceout;

		int insmsin;
		int outsmsin;
		int insmsout;
		int outsmsout;

		int mbDownload;
		int mbUpload;


	public:
		customer() : inVoicein(0), outVoicein(0), inVoiceout(0), outVoiceout(0)
			insmsin(0), outsmsin(0), insmsout(0), outsmsout(0) mbDownload (0), mbUpload(0){}

		void setBrand(const string& b) {
			brand = b;
		}
		string getBrand() const {
			return brand;
		}

		void addInVoiceIn(int duration) {
			inVoicein += duration;
		}
		void addOutvoiceIn(int duration) {
			outVoicein += duration;
		}
		void addInVoiceOut(int duration) {
			inVoiceout += duration;
		}
		void addOutVoiceOut(int duration) {
			outVoiceout += duration;
		}
		void addInSMSIn(int count = 1)
		{
			insmsin += count;
		}
		void addOutSMSIn(int count = 1)
		{
			outsmsin += count;
		}
		void addInSMSOut(int count = 1)
		{
			insmsout += count;
		}
		void addOutSMSOut(int count = 1)
		{
			outsmsout += count;
		}
		void addMBdownload(int mb) {
			mbDownload += mb;
		}
		void addMBupload(int mb)
		{
			mbUpload += mb;
		}

		void billinginfo(const string& msisdn) const
		{
			cout << "customer id:" << msisdn << "(" << brand << ") \n";
			cout << "service within mobile operator" << endl;
			cout << "\t incoming voice call duration" << inVoicein << "\n";
			cout << "\t outgoing voice call duration" << outVoicein << "\n";
			cout << "\tincoming sms duration" << insmsin << "\n";
			cout << "\t outgoing sms duration" << outsmsin << "\n";
			cout << "service outside mobile operator" << endl;
			cout << "\t incoming voice call duration" << inVoiceout << "\n";
			cout << "\t outgoing voice call duration" << outVoiceout << "\n";
			cout << "\tincoming sms duration" << insmsout << "\n";
			cout << "\t outgoing sms duration" << outsmsout << "\n";
			cout << "internet" << endl;
			cout << "\t mbDownload: " << mbDownload << "|" << "\tmbuploaded" << mbUpload << "\n";
		}
	};

	class operator
	{
	private:
		string brand;

		int inVoice;
		int outVoice;
		int insms;
		int outsms;
		int mbDownload;
		int mbUpload;

	public:
		operator() :inVoice(0), outVoice(0), insms(0), outsms(0), mbDownload(0),mbUpload(0) {}
		void setBrand(const string& b)
		{
			brand = b;
		}
		string getBrand() const {
			return brand;
		}
		void addInVoice(int duration) {
			inVoice += duration;
		}
		void addOutvoice(int duration)
		{
			outVoice += duration;
		}
		void addInSMS(int count = 1)
		{
			insmsin += count;
		}
		void addOutSMS(int count = 1)
		{
			outsmsin += count;
		}
		void addMBdownload(int mb) {
			mbDownload += mb;
		}
		void addMBupload(int mb)
		{
			mbUpload += mb;
		}
		void billinginfo(ofstream& out, const string& msisdn) const
		{
			cout << "#operator database" << msisdn << "(" << brand << ") \n";
			cout << "\t incoming voice call duration" << inVoice << "\n";
			cout << "\t outgoing voice call duration" << outVoice << "\n";
			cout << "\tincoming sms duration" << insms << "\n";
			cout << "\t outgoing sms duration" << outsms << "\n";
			cout << "\t mbDownload: " << mbDownload << "|" << "\tmbuploaded" << mbUpload << "\n"

		}
	};		

class CDR
{
private:
	string msisdn;
	string operatorBrand;
	string operator_MCCMNC;
	string callType;
	int duration;
	double download;
	double upload;
	string thirdparty_MSISSDN;
	string thirdpartyoperator_MSISSDN;
public:

CDR (const string& line)
{
	stringstream ss(line);
	getline(ss, msisdn, '|');
	getline(ss, operatorBrand, '|');
	getline(ss, operator_MCCMNC, '|');
	getline(ss, callType, '|');
	ss >> duration;
	ss.ignore(1, '|');
	ss >> upload;
	ss.ignore(1, '|');
	getline(ss, thirdparty_MSISSDN);
	getline(ss, thirdpartyoperator_MSISSDN);

    //void customerbilling(){}
	// void interoperator(){}


};


/*
class customer 
{
protected:
	string customerid;
	vector<int>incomingVoicecall;
	vector<int>outgoingVoicecall;
	vector<int>incomingSMS;
	vector<int>outgoingSMS;
public:
*/


};
class signup
{
protected:

	string uname;
	string password;
public:
	signup(string username, string password):uname(username){}
	void display()
	{
		cout << "welcome" << endl;
		char choice;
		cin >> choice;

		switch (choice)
		{

		default:
			cout << "invalid input" << endl;
			break;
		case1:
			cout << "sign up" << endl;
			break;
		case2:
			cout << "log in" << endl;
			break;
		case3:
			cout << "exit" << endl;
			break;


		}
		cout << endl;

	}


	


};
