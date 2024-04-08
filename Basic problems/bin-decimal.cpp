#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int power = 1;
    while (n > 0)
    {
        sum = sum + (n % 10) * power;
        n = n / 10;
        power*=2;
    }
    cout << sum;

    return 0;
}