#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3};
    int (*p)[3]=&arr;
    cout<<*(*(p+0))<<endl;
    cout<<*(*(p+0)+1)<<endl;
    cout<<*(*(p+0)+2)<<endl;
    int arrr[2][3]={{1,2,3},{4,5,6}};
    int (*ptr)[2][3]=&arrr;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<*(*(ptr+i)+j)<<endl;
        }
        
    }
    
    // cout<<*p[1]<<endl;
    // cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr;
    return 0;
}