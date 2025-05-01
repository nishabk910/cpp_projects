#include <iostream>
using namespace std;

void convertTime(int hrs) {
    int min = hrs * 60;
    int sec = min * 60;
    cout << "Min: " << min << ", Sec: " << sec << endl;
}

int main() {
    int h;
    cin >> h;
    convertTime(h);
    return 0;
}
