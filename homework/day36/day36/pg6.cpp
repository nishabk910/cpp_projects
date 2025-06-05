#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> buffer;
    list<string>::iterator cursor = buffer.begin(); 

    string command;
    while (cin >> command)
    {
        if (command == "INSERT") 
        {
            string line;
            getline(cin, line);         
            line = line.substr(1);     
            cursor = buffer.insert(cursor, line); 
            ++cursor;                  
        }
        else if (command == "UP")
        {
            if (cursor != buffer.begin()) {
                --cursor;
            }
        }
        else if (command == "DOWN")
        {
            if (cursor != buffer.end()) {
                ++cursor;
            }
        }
        else if (command == "PRINT")
        {
            for (const string& line : buffer) {
                cout << line << endl;
            }
            break;  
        }
    }
    return 0;
}
