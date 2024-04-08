/* alternate sum problem 1-2+3-4+5.... for n=5*/
#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return ((n % 2 == 0) ? (-n) : (n)) + f(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}