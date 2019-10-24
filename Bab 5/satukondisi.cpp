#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout<< "Kelulusan Siswa \n \n ";
    double  nu;
    cout<< "Masukan Nilai Ujian : ";
    cin >> nu;
    cout << endl;

    char HU[12] = "Tidak Lulus";
    if (nu >= 60)
    strcpy(HU, "Lulus");
    
    cout<<  "Hasil Ujian : ";
    cout << HU;
    cout << endl<< endl;
    return 0;
}