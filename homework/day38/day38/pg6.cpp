#include <iostream>
#include <forward_list>
#include <string>
using namespace std;



bool isDeleted(const string& msg) 
{
    return msg.find("DELETED:") == 0;
}

int main() {
    forward_list<string> messages =
    {
        "Hi",
        "Hello",
        "DELETED: Spam",
        "How are you?",
        "DELETED: Abuse"
    };

    
    messages.remove_if(isDeleted);

    for (forward_list<string>::iterator i = messages.begin(); i != messages.end(); ++i) 
    {
        cout << *i << endl;
    }

    return 0;
}

