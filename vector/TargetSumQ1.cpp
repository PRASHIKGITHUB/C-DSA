/* Q) find the total numbers of pairs in the array whose sum is equal to the given value x*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"how many numbers do you want to enter in your array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter what pair sum do you want"<<endl;
    int x;
    cin>>x;
    int count=0;
    cout<<"enter array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                count++;
            }
            
        }
        
    }
    cout<<count<<endl;
    return 0;
}