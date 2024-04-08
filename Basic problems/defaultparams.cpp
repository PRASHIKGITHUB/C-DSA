#include<iostream>
using namespace std;
int sum(int a, int b=1 , int c=2){ // int sum(int a,int b=1,int c)--->THis will throw an error c also has to assign some value
    return a+b+c;
}
int main(){
    cout<<sum(2)<<endl;
    cout<<sum(2,2)<<endl;
    cout<<sum(2,2,3)<<endl;
    return 0;
}