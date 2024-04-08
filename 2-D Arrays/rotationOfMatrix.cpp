#include <iostream>
using namespace std;
void adalbadal(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int n;

    cin >> n;
    int A[n][n];
    //input from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    //swapping diagonal elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            adalbadal(A[i][j], A[j][i]);
        }
    }
    //reversing each row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            adalbadal(A[i][j], A[i][n - 1 - j]);
        }
    }
    //printing matrix
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}