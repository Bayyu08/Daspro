#include <iostream>

using namespace std;

int main()
{
    /*
    for (int i = 0; i < 4; i++) {
        if(i == 2) {
            continue;
        }
        if(i > 3) {
            break;
        }
        cout << i << endl;
    }
    */
    /*
    i = 0, o
    i = 1, 1
    i = 2
    i = 3, 3
    */

    /*for (int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 1; j++) {
            cout << i << endl;
        }
    }
    */

    /*
    i = 0, j=0; 0
           j=1; 0
    i=1,   j=0; 1
           j=1; 1
    */

    /*
    for (int i = 0; i <= 1; i++) {
            cout << i << endl;
        for(int j = 0; j <= 1; j++) {
            cout << j << endl;
        }
    }
    */

    int menu;
    cout << "=== Daftar Menu ===" <<endl;
    cout << "1. Nasi Magelangan" <<endl;
    cout << "2. Nasi Ayam Bali" <<endl;
    cout << "3. Indomie Telor" <<endl;
    cout << "4. Nasi Telor" <<endl;
    cout << "=== Anda Mau Makan Apa ===" <<endl;

    cin >>menu;
    switch(menu) {
    case 1:
        cout << "Nasi Magelangan";
        break;
    case 2:
        cout << "Nasi Ayam Bali";
        break;
    case 3:
        cout << "Indomie Telor";
        break;
    case 4:
        cout << "Nasi Telor";
        break;

    default:
        cout << " Maaf Menu Yang Anda Pilih Sedang Kosong !" <<endl;
    }
    return 0;
}
