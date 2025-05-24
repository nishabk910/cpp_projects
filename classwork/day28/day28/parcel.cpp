
#include<iostream>
#include<string>
#include "pacel.h"

using namespace std;




Parcel::Parcel(string id, int wt, int dist) 
{
    parcelId = id;
    weight = wt;
    distance = dist;
    cost = 0;
    calculateCost();
}

void Parcel::calculateCost() 
{
    if (weight <= 5)
        cost = 5 * distance;
    else
        cost = 8 * distance;
}

void Parcel::printCost()
{
    cout << "Parcel " << parcelId << " | Cost: " << cost << endl;
}


