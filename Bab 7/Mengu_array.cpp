#include <iostream>
using namespace std;

int main()
{
    int A [7];
    int j,k,i, temp;

    cout << "Masukan nilai pada elemen array : " << endl;
    for (i = 0; i < 7; i++)
    {
        //menginput elemen array
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    cout << "\n Nilai elemen array sebelum diurutkan : " << endl;
    for (i = 0; i < 7; i++)
    {
        cout << "A[" << i << "] = " << A[i] << endl;
    }
    //pengurutan metode maks-minim
    int jmaks, u=6;
    for (j = 0; j < 6; j++)
    {
        jmaks = 0;
        for (k = 1; k <= u; k++)
        {
            if (A[k] > A[jmaks])
            {
                jmaks = k;
            }
        }
        //penukaran nilai elemn arrray
        temp = A[u];
        A[u] = A[jmaks];
        A[jmaks] = temp;
        u--;
        
    }
    cout << "\nNilai Elemen setelah diurutkan : " << endl;
    for (i = 0; i < 7; i++)
    {
        cout << "A[" << i << "] = " << A[i] << endl;
    }
    
    return 0;
    
}