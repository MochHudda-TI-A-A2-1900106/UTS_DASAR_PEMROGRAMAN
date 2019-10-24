#include<iostream>
using namespace std;

int main()
{
    double NU;
    char indeks;

    cout << "KONVERSI NILAI SISWA \n \n";
    cout << "Masukan nilai siswa :";
    cin >> NU;
    cout<< endl;

    if (NU>=85)
    {
        /* code */
        indeks = 'A';
    }
    else if (NU>=75)
    {
        /* code */
        indeks = 'B';
    }
    else if (NU>=55)
    {
        /* code */
        indeks = 'C';
    }
    else if (NU>=40)
    {
        /* code */
        indeks = 'D';
    }else
    {
        /* code */
        indeks = 'E';
    }
    cout<< "Indeks Siswa = " << indeks << endl;

    return 0;
}