#include <iostream>
using namespace std;

int main()
{
    // int m, n;
    // cin >> m >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0)
    //     {
    //         for (int k = 0; k < m; k++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     else if (i == n - 1)
    //     {
    //         for (int k = 0; k < m; k++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         for (int p = 0; p < m; p++)
    //         {
    //             if (p == 0 || p == m - 1)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         cout << endl;
    //     }
    // }

    /* ************ Urvi mam se sikh bsdk ************** */
    int row,col;
    cin>>row>>col;
    for (int i = 1; i <= col; i++)
    {
        for (int j =1; j <= row; j++)
        {
            if (i==col || i==1 || j==1 || j==row)
            {
                cout<<"*";
            }
            else{
                cout<<" ";





                

            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}