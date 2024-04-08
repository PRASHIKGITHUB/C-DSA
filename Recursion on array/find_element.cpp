/* Find weather the element is present in a given array or not*/
#include <iostream>
using namespace std;
bool f(int *arr, int target, int size, int ind)
{
    if (size - 1 == ind)
    {
        if (arr[ind] == target)
        {
            return "yes";
        }
        else
            return "no";
    }
    else if (arr[ind] == target)
    {
        return "yes";
    }
    else
    {
        return f(arr, target, size, ind + 1);
    }

    /*pw*/
    
    // if (size == ind)
    // {
    //     return false;
    // }

    // return (arr[ind] == target) || f(arr, target, size, ind + 1);
    
}
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << f(arr, target, n, 0);
    return 0;
}