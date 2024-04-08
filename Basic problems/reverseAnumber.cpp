#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cin >> n;
    // while (n > 0)
    // {
    //     rev = (rev + n % 10);
    //     if (n/10!=0)
    //     {
    //         rev = rev * 10;
    //     }

    //     n = n / 10;
    // }

    // while (n > 0) // URVI MAM
    // {
    //     int lastdigit = n % 10;
    //     rev = rev * 10 + lastdigit;
    //     n /= 10;
    // }
    // cout << rev;

    /* SUM PROBLEM*/ // 1-2+3-4.....n
    // int sum = 0;
    // int minus = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i * minus;
    //     minus = minus * (-1);
    // }
    // cout << sum;

    /*PRINTING 1ST N FACTORIAL*/
    int factorial=1;
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
        cout<<factorial<<endl;
    }
    
}