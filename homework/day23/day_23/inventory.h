#pragma once


struct prod
{
    int id;
    char name[30];
    char type[20];
    char category[20];
    int quantity;
    float price;
};

void add(prod* p, int* n);
void show(prod* p, int n);
void remove(prod* p, int n, const char name[]);
void update(prod* p, int n, const char name[]);
void search(prod* p, int n, const char name[]);
