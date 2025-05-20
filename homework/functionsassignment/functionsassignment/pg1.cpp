//The Endless Tunnel Puzzle

#include <iostream>
using namespace std;

void tunnel(int e) {
    if (e <= 0)
        return;
    cout << e << " ";
    tunnel(e / 2);
}