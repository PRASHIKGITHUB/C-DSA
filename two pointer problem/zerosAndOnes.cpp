/*SORT AN ARRAY CONSISTING OF ONLY 0's and 1's*/
#include <iostream>
#include <vector>
using namespace std;
void sortZerosandOnes(vector<int> &v)
{
    // int Zeros = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == 0)
    //     {
    //         Zeros++;
    //     }
    // }
    // for (int j = 0; j < v.size(); j++)
    // {
    //     if (j < Zeros)
    //     {
    //         v[j] = 0;
    //     }
    //     else
    //     {
    //         v[j] = 1;
    //     }
    // }

    // alternate way

    int leftind = 0;
    int rightind = v.size() - 1;
    while (leftind < rightind)
    {
        if (v[rightind] == 0 && v[leftind] == 1)
        {
            v[rightind--] = 1;
            v[leftind++] = 0;
        }
        if (v[leftind] == 0)
        {
            leftind++;
        }
        if (v[rightind] == 1)
        {
            rightind--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sortZerosandOnes(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}