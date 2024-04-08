#include<iostream>
using namespace std;
void maxValue(int arr[],int size,int max,int indix){

if (indix==size-1)
{
    cout<<max;
    return;
}
else{
    if (arr[indix+1]>max)
    {
        max=arr[indix+1];
        maxValue(arr,9,max,indix+1);
    }
    else{
        maxValue(arr,9,max,indix+1);
    }
    
}

}
int main(){
    int arr[]={9,8,7,6,54,4,3,2,1};
    maxValue(arr,9,arr[0],0);
    return 0;
}