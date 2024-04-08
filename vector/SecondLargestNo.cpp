#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,2,3,456,23,562,1,9,562};
    int max=INT_MIN;
    int secmax=0;
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i]>max)
        {
            secmax=max;
            max=arr[i];
        }
        
    }
    cout<<secmax<<endl;
    // cout<<INT_MAX;
    
    return 0;
}