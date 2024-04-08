#include <iostream>
using namespace std;
void fun(int arr[])
{ // array is always sent by by reference
    arr[0] = 69;
    cout << *arr << endl;
        cout<<arr[0]<<endl;
}

//use either ways it's fine

void fun(int* ptr){//array is always sent by by reference
    ptr[ 0]=69;
    cout<<ptr[0]<<endl;
    cout << *ptr << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4}; // array name itself stores address of first element;
    // cout<<arr[0]<<endl;
    int *ptr = &arr[0];
    // cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    // cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    fun(arr);
    return 0;
}