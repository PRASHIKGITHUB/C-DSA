#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    cout << "enter the values of r1,c1" << endl;
    cin >> r1 >> c1;
    cout << "enter the values of r2,c2" << endl;
    cin >> r2 >> c2;
    int m1[r1][c1];
    int m2[r2][c2];
    int ans[r1][c2] = {0};
    cout << "enter the elements for m1" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "enter the elements for m2" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }

    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int value=0;
                for (int k = 0; k < c1; k++)
                {
                    value=value+m1[i][k]*m2[k][j];
                }
                ans[i][j]=value;
            }
        }
    }
    else
       {
         cout << "Matrix multiplication is not possible" << endl;
        return 0;
       }
       for (int i = 0; i < r1; i++)
       {
        for (int j = 0; j < c2; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
       }
       
    
}