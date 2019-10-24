#include <iostream>
using namespace std;

int main()
{
    //pengulangan menaik
    cout << "Pengulangan Menaik" << endl;
    for (int c = 0; c < 10; c++)
    {
        cout << c+1 << endl;
    }
    cout << "\n";
    //pengulangan menurun
    cout << "Pengulangan Menurun" << endl;
    for (int d = 10; d > 0;d--)
    {
        cout << d << endl;
    }
    return 0;
}