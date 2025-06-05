#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> tasks;
    string command;

    while (cin >> command)
    {
        if (command == "add") {
            string task;
            cin >> ws;
            getline(cin, task);

           
            if (task.find("critical") != string::npos) {
                tasks.push_front(task);
            }
            else {
                tasks.push_back(task);
            }

        }
        else if (command == "urgent")
        {
            string task;
            cin >> ws;
            getline(cin, task);
            tasks.push_front(task);

        }
        else if (command == "remove")
        {
            string task;
            cin >> ws;
            getline(cin, task);
            tasks.remove(task); 

        }
        else if (command == "show") {
            for (auto i = tasks.begin(); i != tasks.end(); ++i)
            {
                cout << *i;
                if (next(i) != tasks.end())
                    cout << " -> ";
            }
            cout << endl;
            break; 
        }
    }

    return 0;
}
