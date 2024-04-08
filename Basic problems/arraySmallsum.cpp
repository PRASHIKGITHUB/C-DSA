#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n], B[n];
    int indiA, indiB;
    cout << "enter elements for A" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter elements for B" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    int minA = A[0], minB = B[0], minA2, minB2;
    for (int i = 2; i < n; i++)
    {
        if (A[i] < minA)
        {
            minA2 = minA;
            minA = A[i];
            indiA = i;
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (B[i] < minB)
        {
            minB2 = minB;
            minB = B[i];
            indiB = i;
        }
    }
    if (indiA != indiB)
    {
        cout << minA + minB << endl;
    }
    else
    {
        if (minA + minB2 < minB + minA2)
        {
            cout << minA + minB2;
        }
        else
        {
            cout << minB + minA2;
        }
    }
}