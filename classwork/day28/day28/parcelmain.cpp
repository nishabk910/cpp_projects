#include<iostream>
#include<string>
#include"pacel.h"


using namespace std;



int main() 
{
    Parcel p1("PX001", 3, 50);
    p1.printCost();

    Parcel p2("PX002", 8, 50);
    p2.printCost();

    return 0;
}