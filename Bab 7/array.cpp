#include <iostream>
using namespace std;

int main()
{
    int n_array[10];
    cout << "Masukan nilai pada : " << endl;
    for (int c = 0; c < 10; c++)
    {
        cout << "Elemen [" << c << "] = ";
        cin >> n_array [c];
    }
    cout << "\n";

    cout << "Tampilkan nilai yang  dimasukan : " << endl;
    for (int d = 0; d < 10; d++)
    {
        cout << "Nilai yang terdapat pada elemen ke ";
        cout << d+1 << " = " << n_array[d] << endl;
    }
    cout << "\n";
    return 0;
}