#include<iostream>
using namespace std;

int main(){
     int arr[]={1,2,3,57,5,6};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int max=arr[0];

    for (int i = 1; i <size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }

    cout<<max;
    return 0;
}