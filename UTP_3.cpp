#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tinggiSegitiga;
    cin >> tinggiSegitiga;
    int bilanganGanjil = 1;
    for (int i = 0; i < tinggiSegitiga; i++) {
        for (int j = 0; j <= i; j++) {
            cout << bilanganGanjil << " ";
            bilanganGanjil += 2;
        }
        cout << endl;
    }
    return 0;
}
