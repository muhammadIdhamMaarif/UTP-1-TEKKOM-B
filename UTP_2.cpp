#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int batasBawah, batasAtas;
    cin >> batasBawah >> batasAtas;
    int totalSandiAman = 0;
    for (int i = batasBawah; i <= batasAtas; i++) {
        if (i % 2 == 0 && i % 8 != 0) {
            totalSandiAman++;
        }
    }
    
    cout << totalSandiAman << endl;
    return 0;
}
