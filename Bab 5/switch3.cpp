#include<iostream>
using namespace std;

int main()
{
    int kode;

    cout << "1 = Senin 2 = Selasa 3 = Rabu 4 = Kamis" << endl;
    cout << "5 = Jum'at 6 = Sabtu 7 = Minggu" << endl;
    cout << "Masukan kode hari (1-7) : " << endl;
    cin >> kode;

    switch (kode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Hari kerja" << endl;
        break;
    case 6:
    case 7:
        cout << "Hari libur" << endl;
    default:
        cout << "Kode hari tidak valid" << endl;
        break;
    }
    return 0;
}