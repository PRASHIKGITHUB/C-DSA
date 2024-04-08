#include<iostream>
using namespace std;
void printArr(int arr[],int indix){
if (indix==0)
{
    cout<<arr[indix]<<" ";
    return;
}
else{
    printArr(arr,indix-1);
    cout<<arr[indix]<<" ";
}

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printArr(arr,8);
    return 0;
}
