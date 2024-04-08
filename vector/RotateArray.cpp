/* Rotate the given array 'a' by k steps,where k is non-negative.
note:k can be greater than n as well where n is the size of array 'a'*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Here we are using extra memory to rotate array

    int a[] = {1, 2, 3, 4, 5, 6};
    // int k;
    // cin >> k;
    // int n = sizeof(a) / sizeof(int);
    // k = k % n;
    // int arr[n];
    // for (int i = 0; i < k; i++)
    // {
    //     arr[i] = a[n - k + i];
    // }
    // int j = 0;
    // for (int i = k; i < n; i++)
    // {
    //     arr[i] = a[j++];
    // }
    // for (int m = 0; m < n; m++)
    // {
    //     cout << arr[m] << " ";
    // }

    // using vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k = 2;
    k = k % v.size();
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + 2, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}