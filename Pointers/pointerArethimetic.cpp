#include<iostream>
using namespace std;

int main(){
    int x=9;
    double y=9.9;
    int * ptr=&x;
    double * ptrd=&y;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptrd<<endl;
    cout<<ptrd+1<<endl;
    return 0;
}