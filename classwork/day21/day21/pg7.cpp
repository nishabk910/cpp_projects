#include <iostream>
#include <cstring>
using namespace std;

bool isConsecutive(char a, char b) {
    return (b - a == 1);
}

void removeConsecutiveAlphabet(char* str, char* result, int& count) {
    char* ptr = str;
    char* res = result;
    count = 0;

    while (*ptr != '\0') {
        if (*(ptr + 1) != '\0' && isConsecutive(*ptr, *(ptr + 1))) {
            // Skip both characters
            ptr += 2;
            count++;
        }
        else {
            *res = *ptr;
            res++;
            ptr++;
        }
    }
    *res = '\0'; // Null-terminate result string
}

int main() {
    char input[100];
    char output[100];
    int count = 0;

    cout << "Enter the string: ";
    cin.getline(input, 100);

    removeConsecutiveAlphabet(input, output, count);

    cout << "Output: " << output << endl;
    cout << "Count: " << count << endl;

    return 0;
}
