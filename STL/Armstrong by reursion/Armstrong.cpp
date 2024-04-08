#include <iostream>
using namespace std;
int pow(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    else
        return n * pow(n, k - 1);
}
int f(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }
    else 
    {
        return pow(n % 10, d) + f(n / 10, d);
    }
}
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    cout<<f(n,d)<<endl;
    if (f(n,d)==n)
    {
        cout<<"it's an armstrong number"<<endl;
    }
    else{
        cout<<"it isn't an armstrong number"<<endl;
    }
    
    return 0;
}