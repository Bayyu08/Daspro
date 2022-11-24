#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;
    cout << "input bil : ";
    cin >> x;
    while (x != 9999)
    {
        cout << x << endl;
        sum += x;
        cout << "input bil : ";
        cin >> x;
    }
    cout << "jumlah angka = " << sum << endl;
    return 0;
}
