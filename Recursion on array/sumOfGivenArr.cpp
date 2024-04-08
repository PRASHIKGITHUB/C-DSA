#include<iostream>
using namespace std;
void sumArr(int arr[],int size,int sum){
    if (size==0)
    {
        cout<<sum;
    }
    else{
        sum=sum+arr[size-1];
        sumArr(arr,size-1,sum);
    }
    
}
int main(){
    int arr[]={1,2,3};
    sumArr(arr,3,0);
    return 0;
}