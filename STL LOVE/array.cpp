#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<size<<endl;
    cout<<a.at(3)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    return 0;
}