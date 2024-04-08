#include <iostream>
using namespace std;

int sum(int a, int b)
{   int c=5;
//   cout<<sum(1,2,5)<<endl; ERROR DEGA YE
    return a + b;
}
int sum(int a, int b, int c)//********IF U WANT TO AVOID THIS USE FUNCTION PROTOTYPING************//
{
    return a + b + c;
}

float sum(float a, float b)
{   cout<<sum(1,2,5)<<endl;//YE NHI DEGA ERROR
    return a + b;
}
int main()
{
 cout<<sum(9,5)<<endl;
//  cout<<sum(9,2,5)<<endl;
 float a=4.5,b=6.6;
 cout<<sum(a,b)<<endl;
    return 0;
}