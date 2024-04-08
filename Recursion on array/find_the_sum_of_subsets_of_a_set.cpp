#include <iostream>
#include <vector>
using namespace std;
void f(int *arr, int idx,  int sum)
{
    if (idx == 3)
    {
        cout << sum << " ";
        return;
    }

    f(arr, idx + 1, sum + arr[idx]);

    f(arr, idx + 1, sum);
}
int main()
{
    int arr[] = {1, 2, 3};
    int sum = 0;

    f(arr, 0,  0);

    return 0;
}