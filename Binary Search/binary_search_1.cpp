#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6] = {3, 6, 9, 23, 67, 99};
    int odd[5] = {1, 3, 5, 7, 9};
    cout<<binarySearch(even,6,9)<<endl;
    cout<<binarySearch(odd,5,7)<<endl;

    return 0;
}