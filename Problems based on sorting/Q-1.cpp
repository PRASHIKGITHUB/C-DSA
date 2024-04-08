/*Given an integer array arr,move all 0's to the end
or it while maintaining the ralative order of the non
zero elements.
note that yo must do in place without making a copy of
th array.*/
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int *arr, int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;
        while (j != i)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
                j++;
        }
        if (!flag)
        {
            break;
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}