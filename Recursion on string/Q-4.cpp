/* Given a number num and a value k. Print k multiples of num.*/
#include<iostream>
using namespace std;
void f(int num,int k){
if (k==1)
{
    cout<<num*k<<" ";
}
else{
    f(num,k-1);
    cout<<num*k<<" ";
}

}
int main(){
int num;
cin>>num;
int k;
cin>>k;
f(num,k);
    return 0;
}