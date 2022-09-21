#include <iostream>

using namespace std;

int main()

{
    int p, l, t, hasil;
    cout << "Masukkan Panjang  : ";
    cin >> p;
    cout << "Masukkan Lebar  : ";
    cin >> l;
    cout << "Masukkan Tinggi : ";
    cin >> t;
    hasil = 2*p*l+2*p*t+2*t*l;
    cout << "Luas Balok = " << hasil;

    return 0;
}
