
#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;

int main() {
    deque<string> commands;
    int limit = 4;

    vector<string> input =
    {
        "RUN ls",
        "RUN mkdir test",
        "RUN cd test",
        "RUN touch file.txt",
        "RUN cat file.txt",
        "HISTORY"
    };

    for (int i = 0; i <= input.size(); i++)
    {
        string cmd = input[i];

        if (cmd == "HISTORY") {
            for (string s : commands)
                cout << s << endl;
        }
        else if (cmd.find("RUN ") == 0)
        {
            string real = cmd.substr(5);
            commands.push_back(real);
            if (commands.size() > limit)
            {
                commands.pop_front();
            }
        }
    }

    return 0;
}
