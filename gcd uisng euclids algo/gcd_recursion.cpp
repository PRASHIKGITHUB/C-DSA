#include<iostream>
using namespace std;
int gcd(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (a>b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    return gcd(b%a,a);
    
}
int main(){
    // int a;
    // int b;
    // cin>>a >>b;
cout<<gcd(2,3);

    return 0;
}