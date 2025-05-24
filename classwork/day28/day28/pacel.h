#pragma once



    class Parcel 
    {
    private:
        string parcelId;
        int weight;
        int distance;
        int cost;

    public:
        Parcel(string id, int wt, int dist);
        void calculateCost();
        void printCost();
    };

