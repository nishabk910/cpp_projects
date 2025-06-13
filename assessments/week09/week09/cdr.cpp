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
//ofstream logfile("calllog.txt", ios::app);



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

	const char* CDRlevel(int l)
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

};

class user
{
private:
	map<string, string>user;
	const string userFile = "calllog.txt";
	void loadUser()
	{
		ifstream in(userFile.c_str());
		string u, p;
		while (cin >> u >> p)
		{
			user[u] = p;
		}
		in.close();
	}

	void saveUser(const string& user, const string& pass)
	{
		ofstream out(userFile.c_str());
		cout << user << "" << pass << endl;
		out.close();
	}










		

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











	void customerbilling(){}



	void interoperator(){}


};



class customer 
{
protected:
	string customerid;
	vector<int>incomingVoicecall;
	vector<int>outgoingVoicecall;
	vector<int>incomingSMS;
	vector<int>outgoingSMS;
public:



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
