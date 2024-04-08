/*Given an array of integers of size n.Answer q queries where you need to print sum of values in a given range of indices
from l to r(both included).*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {

        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i] + v[i - 1];
    }

    cout << "how many queries" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int l, m;
        cout << "enter l,m values" << endl;
        cin >> l >> m;
        cout << v[m] - v[l - 1] << endl;
    }

    return 0;
}