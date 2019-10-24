#include <iostream>
using namespace std;

int main()
{
    int A[10];
    int nilai;
    cout << "Nama : Mochammad Hudda" << endl;
    cout << "Nim  : A2.1900106" << endl << endl;
    cout << "Nilai pada : " << endl << endl;
    for (int c = 0; c < 10; c++)
    {
        cout << "Indeks [" << c << "] = ";
        cin >> A[c];
    }
    cout << "Nilai yang dicari adalah : ";
    cin >> nilai;
    for (int d = 0; d < 10; d++)
    {
        if (A[d] == nilai)
        {
            cout << "Nilai tedapat pada indeks ke " << d << endl;
            break;
        }
        
    }
    cout << "\n";
    return 0;
}