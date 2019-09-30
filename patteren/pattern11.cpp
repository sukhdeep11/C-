#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 3; i++)
    {
        cout << "   ";

        i <= 2 ? k++ : k--;

        for (j = 1; j <= 3; j++)
        {
            if ((j >= 3 - k) && (j <= 1 + k))
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (i = 1; i < 2; i++)
    {
        cout << " ";

        for (j = 1; j <= 4; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    //
    for (i = 1; i < 2; i++)
    {
        cout << " ";

        for (j = 1; j <= 4; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    //
    int kk = 0;

    for (i = 1; i <= 3; i++)
    {
        cout << "   ";

        i <= 2 ? kk++ : kk--;

        for (j = 1; j <= 3; j++)
        {
            if ((j >= 3 - kk) && (j <= 1 + kk))
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
