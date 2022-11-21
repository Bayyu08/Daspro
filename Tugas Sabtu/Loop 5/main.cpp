#include <iostream>

using namespace std;

int main()
{
    cout << "Program Akan Berhenti Kalau Anda Menginput Angka -99\n" << endl;
    while (true)
    {
        cout << "Masukkan Nilai Yang Anda Pilih : ";
        int x;
        cin >> x;
        if (x == -99)
        {
            cout << "\nKeluar Karena Break" << endl;
            break;
        }
    }

    return 0;
}
