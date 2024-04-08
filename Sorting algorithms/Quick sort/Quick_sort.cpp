#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1; // for insetting elements < pivot
    int j = first;     // for finding elements < pivot
    for (; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    //now i is pointing to the laste element < pivot
    // correct position for pivot will be --> i+1
    swap(arr[i + 1], arr[last]);
    return i + 1;
}
void QuickSort(int arr[], int first, int last)
{
    if (first >= last)
    {
        return;
    }
    int pi = partition(arr, first, last);
    QuickSort(arr, first, pi - 1);//recursive case
    QuickSort(arr, pi + 1, last);
}

int main()
{
    int arr[] = {2, 456, 74, 3, 7, 8, 3, 26, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    QuickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}