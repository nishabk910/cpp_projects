#include "pg1.h"

int main() 

{
    Flight f1("AI203", 100);
    f1.bookSeats(30);
    f1.dispAvailable();  

    f1.bookSeats(80);    

    return 0;
}

