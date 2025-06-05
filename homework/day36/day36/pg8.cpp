#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> history;
    const int N = 4;

    vector<string> ip =
    {
        "RUN ls",
        "RUN mkdir test",
        "RUN cd test",
        "RUN touch file.txt",
        "RUN cat file.txt",
        "HISTORY"
    };

    for (const string& cmd : ip) {
        if (cmd == "HISTORY") {
            for (const string& c : history) 
            {
                cout << c << endl;
            }
        }
        else if (cmd.rfind("RUN ", 0) == 0) 
        {
            string actual = cmd.substr(4);
            history.push_back(actual);
            if (history.size() > N) {
                history.pop_front(); 
            }
        }
    }

    return 0;
}
