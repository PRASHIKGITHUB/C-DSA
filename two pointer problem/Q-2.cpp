/*Given an array of integers 'a',move all the even integers at eh beginning of the array followed by all the
 odd integers.The relative order of odd or even integers does not matter.Return any array that satisfies the
 condition*/

#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{

    int leftind = 0;
    int rightind = v.size() - 1;
    while (leftind < rightind)
    {
        if (v[leftind] % 2 == 1 && v[rightind] % 2 == 0)
        {
            // int temp;
            // temp = v[leftind];
            // v[leftind] = v[rightind];
            // v[rightind] = temp;
            swap(v[leftind], v[rightind]);

            rightind--;
            leftind++;
        }
        if (v[leftind] % 2 == 0)
        {
            leftind++;
        }
        if (v[rightind] % 2 == 1)
        {
            rightind--;
        }
    }
    return;
}
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}