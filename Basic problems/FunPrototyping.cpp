#include <iostream>
#include<cmath>
using namespace std;
int sum(int, int);
int sum(int, int, int);
float sum(float, float);
void tio(int arr[] );
int main()
{
    cout << sum(2, 3) << endl;
    cout<<pow(2,3)<<endl;
    cout<<sqrt(16)<<endl;// IT RETURNS DOUBLE AND TAKES DOUBLE//
    int arr[]={1,2,3};
    tio(arr);
    return 0;
    
}
int sum(int a, int b)
{
    float c = 5.6, d = 1.1;
    cout << sum(c, d) << endl;//HERE IT DOSENT MATTER WHEATHER ITS UPWARD OR NOT CAUSE EVERYTHIG IS ABOVE EACH OTHER
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
float sum(float a, float b)
{
    return a + b;
}
void tio(int arr[]){
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}