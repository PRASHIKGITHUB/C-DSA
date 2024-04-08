#include <iostream>
using namespace std;

int main()
{
    int Arr[30000] = {0};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        Arr[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (Arr[arr[i]] == 1)
        {
            cout << arr[i];
        }
    }

    return 0;
}