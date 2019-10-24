#include<iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "Staf Pengajar Program C++ :"<< endl;
    cout << "================================"<<endl;
    cout << "1.  Nur Alamsyah \n"<<endl;
    cout << "2.  Haldi Budiman\n"<<endl;
    cout << "3.  Yusri Ikhwani\n"<<endl;
    cout << "4.  Dessy Wundandari\n"<<endl;
    cout << "5.  Rais Fathony\n"<<endl;
    cout << "6.  Aulia Rahma\n"<<endl;
    cout << "7.  Zainuddin\n"<<endl;
    cout << "8.  Wagino\n"<<endl;
    cout << "9.  Rasyidan\n"<<endl;
    cout << "10. Ramdhani\n"<<endl;

    cout << "Staf Pengajar Pemrogeaman C++ : "; 
    cin >> pilihan;
    cout << endl;

    switch (pilihan)
    {
    case 1:
        cout << "Pilihan anda benar|\n"<< endl;
        break;
    case 2:
        cout << "Pilihan anda benar|\n"<< endl;
        break;
    case 3:
        cout << "Pilihan anda salah|\n"<< endl;
        break;
    case 4:
        cout << "Pilihan anda salah|\n"<< endl;
        break;
    case 5:
        cout << "Pilihan anda benar|\n"<< endl;
        break;        
    case 6:
        cout << "Pilihan anda salah|\n"<< endl;
        break;
    case 7:
        cout << "Pilihan anda benar|\n"<< endl;
        break;
    case 8:
        cout << "Pilihan anda benar|\n"<< endl;
        break;   
    case 9:
        cout << "Pilihan anda salah|\n"<< endl;
        break;
    case 10:
        cout << "Pilihan anda benar|\n"<< endl;
        break;         
    default:
        cout << "Pilihan anda tidak ada pada daftar\n\n";
        break;
    }
    return 0;
}