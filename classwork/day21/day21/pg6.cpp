#include<iosteam>
using namespace std;



int main() 
{
    char s1[200];
    fgets(s1, 199,stdin);




}



























#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countVowels(char* str) {
    int count = 0;
    while (*str != '\0') {
        if (isVowel(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a string: ";

    cin.getline(str, 100);

    int result = countVowels(str);

    cout << "Number of vowels: " << result << endl;

    return 0;
}
