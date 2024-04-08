#include<iostream>
using namespace std;
int global=3;
int main(){
    int i=9;
    int global=5;
    cout<<::global;
    // int i=6;
    for (int j = 0; j < 5; j++)
    {
        // cout<<j<<endl;
        // cout<<i<<endl;
    }
    // cout<<i<<endl;
    // cout<<j<<endl;
    return 0;
}