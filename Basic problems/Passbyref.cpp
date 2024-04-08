#include<iostream>
using namespace std;
void changevalue(int &z){
    z=100;
}
int main(){
    int p=5;
    // int &q=p;
    // if (p==q)
    // {
    //    cout<<"1";
    // }
    changevalue(p);
    cout<<p;
    
    return 0;
}