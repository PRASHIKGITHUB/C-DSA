#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    c=cin.char();
    int i=1;
    for (; c!='$'; i++)
    {
       cin>>c;
    }
    cout<<i;
    

    return 0;
}