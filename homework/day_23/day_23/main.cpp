#include <iostream>
#include <string>
#include "inventory.h"

using namespace std;

void add(prod* p, int* n)
{
    cout << "ID: ";
    cin >> p[*n].id;
    cin.ignore();

    cout << "name: ";
    cin.getline(p[*n].name, 30);

    cout << "type: ";
    cin.getline(p[*n].type, 20);

    cout << "category: ";
    cin.getline(p[*n].category, 20);

    cout << "price: ";
    cin >> p[*n].price;

    (*n)++;
    cout << "product added\n";
}

void show(prod* p, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i].name[0] == '\0') continue;
        cout << "\nID: " << p[i].id;
        cout << "\nname: " << p[i].name;
        cout << "\ntype: " << p[i].type;
        cout << "\ncategory: " << p[i].category;
        cout << "\nprice: " << p[i].price << "\n";
    }
}

void remove(prod* p, int n, const char name[])
{
    for (int i = 0; i < n; i++) {
        if (strcmp(p[i].name, name) == 0) {
            p[i].name[0] = '\0';
            cout << "Product removed\n";
            return;
        }
    }
    cout << "not found\n";
}

void update(prod* p, int n, const char name[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].name, name) == 0)
        {
            cout << "new price: ";
            cin >> p[i].price;
            cout << "product updated\n";
            return;
        }
    }
    cout << " not found.\n";
}

void search(prod* p, int n, const char name[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].name, name) == 0)
        {
            cout << "\nproduct found:\n";
            cout << "ID: " << p[i].id;
            cout << "\nname: " << p[i].name;
            cout << "\ntype: " << p[i].type;
            cout << "\ncategory: " << p[i].category;
            cout << "\nprice: " << p[i].price << "\n";
            return;
        }
    }
    cout << "not found\n";
}

int main()
{
    prod list[50];
    int total = 0;
    int ch;
    char key[30];

    while (true)
    {
        cout << "\n1. add\n2. show\n3. remove\n4. update\n5. search\n6. exit\n";
        cout << "choice: ";
        cin >> ch;
        cin.ignore();

        if (ch == 1)
            add(list, &total);
        else if (ch == 2)
            show(list, total);
        else if (ch == 3) {
            cout << "enter name: ";
            cin.getline(key, 30);
            remove(list, total, key);
        }
        else if (ch == 4) {
            cout << "enter name: ";
            cin.getline(key, 30);
            update(list, total, key);
        }
        else if (ch == 5) {
            cout << "enter name: ";
            cin.getline(key, 30);
            search(list, total, key);
        } 
        else
            cout << "invalid option\n";
        break;
    }

    return 0;
}

