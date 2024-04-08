#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1 ;
        int current = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}
// 1 4  7 | 2 34 21
int main()
{

    vector<int> v = {1, 4, 7, 2, 34, 12};
    insertionSort(v, v.size());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
