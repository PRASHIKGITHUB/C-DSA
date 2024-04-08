#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int l = 0;
    int r = 0;
    // input from user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        // this loops checks the first condition in the question
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                l++;
            }
        }
        // this loop checks the second condition in the question
        for (int k = i + 1; k < n; k++)
        {
            if (arr[i] < arr[k])
            {
                r++;
            }
        }
        if (l == i && r == n - i - 1)
        {
            cout << arr[i];
            break;
        }
        else if (i == n - 2)
        {
            cout << "-1" << endl;
        }

        l = 0;
        r = 0;
    }

    return 0;
}