#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    /*Pattern 1*/
// *
// ***
// *****
// *******
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (2*i-1); j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

    /*Pattern 2*/
// ****
// ***
// **
// *
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

    /*Pattern 3*/
//    *
//   ***
//  *****
// *******
//     for(int i=1;i<=n;i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

    /*Pattern 4*/
//  1 2 3 4
//  2 3 4 1
//  3 4 1 2
//  4 1 2 3
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout<<" "<<j;
//         }
//         for (int k = 1; k <= i-1; k++)
//         {
//             cout<<" "<<k;
//         }
//         cout<<endl;

//     }

    /*Pattern 5*/
// 1
// 12
// 123
// 1234
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }

    /*Pattern 6*/
//    1
//   121
//  12321
// 1234321
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << k;
//         }
//         for (int m = i - 1; m >= 1; m--)
//         {
//             cout << m;
//         }
//         cout << endl;
//     }

    /*Pattern 7*/
//     1
//    2 2
//   3   3
//  4     4
// 555555555
//     for (int i = 1; i <= n; i++)
//     {
//         if (i != n)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 cout << " ";
//             }
//             for (int n = 1; n <= 2 * i - 1; n++)
//             {
//                 if (n == 1 || n == 2 * i - 1)
//                 {
//                     cout << i;
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//         else
//         {
//             for (int m = 1; m <= 2 * i - 1; m++)
//             {
//                 cout << i;
//             }
//         }
//         cout<<endl;
//     }
}