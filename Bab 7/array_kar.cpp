#include <iostream>
using namespace std;

int main()
{
    char namaku [6] = { 'H','U','D','D','A','\0'};
    char namamu [6] = "RIMA";

    for (int i = 0; i < 6; i++)
    {
        cout << namaku [i];
    }
    cout << endl;
    cout << namamu;
    cout << endl << endl;
    cout << "Jumlah elemen namaku : " << sizeof(namaku) << endl;
    cout << "Jumlah elemen namamu : " << sizeof(namamu) << endl << endl;
    return 0;
}