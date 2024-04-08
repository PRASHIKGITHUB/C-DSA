#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    //     A
    //    ABC
    //   ABCDE
    //  ABCDEFG
    // ABCDEFGHI
    //  ABCDEFG
    //   ABCDE
    //    ABC
    //     A
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int m = 65; m < 65 + 2 * i - 1; m++)
        {
            char temp = m;
            cout << temp;
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 65; k < 65 + 2 * (n - i) - 1; k++)
        {
            char temp = k;
            cout << temp;
        }
        cout << endl;
    }

    /*ANOTHER PATTERN(for only odd values of n)*/ 
//    *
//    *
//    *
// *******
//    *
//    *
//    *
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == (n + 1) / 2 || j == (n + 1) / 2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}