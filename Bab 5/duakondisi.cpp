#include <iostream>
using namespace std;

int main()
{
    cout<< "Kelulusan Siswa \n \n";
    double  nu;
    cout<< "Masukan Nilai Ujian : ";
    cin >> nu;
    cout << endl;
    if (nu >=60)
    {
        /* code */
        cout<< ("Hasil Ujian = Lulus");
        cout << endl << endl;
    }else
    {
        /* code */
        cout<< ("Hasil Ujian = Tidak Lulus");
        cout << endl << endl;
    }
    return 0;
}