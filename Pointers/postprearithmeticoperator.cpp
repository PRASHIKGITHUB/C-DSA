#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2};
    int* ptr=&arr[0];
    cout<<*ptr++<<endl;
    cout<<*ptr ;
    return 0;
}