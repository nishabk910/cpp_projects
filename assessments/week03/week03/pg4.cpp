//Problem Statement 1
// Write a program that performs the following tasks :
// Finds the starting positions(0 - based index) of the substrings "are" and "i" in a given input string.
// Calculates and prints the sum of these two positions.
// If either of the substrings is not found in the input, treat its position as - 1.


#include <iostream>
#include <string>
#define MAX 100

using namespace std;

int findsubstring(char*, char* s2);

int main()
{
    char str1[MAX];
    cin.getline(str1, MAX);

    char str[MAX] = "are";
    int c1 = findsubstring(str1, str);
    strcpy(str, "i");
    int c2 = findsubstring(str1, str);
    cout << "sum" << (c1 + c2);


    return 0;
}
















