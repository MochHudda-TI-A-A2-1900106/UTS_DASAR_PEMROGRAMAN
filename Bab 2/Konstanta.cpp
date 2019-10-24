#include <iostream>
using namespace std;
const int Max = 5;
int main()
{
    int A[Max];
    for (int C = 0; C < Max; C++)
    {
        A[C] = C * 10;
    }
    for (int c = 0; c < Max; c++)
    {
        cout << A[c] << endl;
    }
    return 0;
}