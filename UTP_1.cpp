#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;
    cin >> panjang >> lebar;
    string tipe = (panjang == lebar) ? "Persegi" : "Persegi Panjang";
    if (panjang <= 0 || lebar <= 0) {
        cout << "Error: Panjang dan lebar harus bilangan positif! ";
        return 0;
    }

    int luas = panjang * lebar;
    int keliling = 2 * (panjang + lebar);
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;
    cout << "Tipe: " << tipe << endl;
    return 0;
}