#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(7);
    int x, index = -1;
    cin >> x;
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < 7; i++)
    // {
    //     if (v[i] == x)
    //     {
    //         index = i;
    //     }
    // }
    // if (index == -1)
    // {
    //     cout << "the given number dosen't exist in the vector" << endl;
    // }
    // else
    // {
    //     cout << "last index for " << x << " is at index number " << index << endl;
    // }

    /*OR--->last se traverse karte tho efficient ban jata*/
    int occ = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occ = i;
            break;
        }
    }
    if (occ == -1)
    {
        cout << "the given number dosen't exist in the vector" << endl;
    }
    else
    {
        cout << "last index for " << x << " is at index number " << occ << endl;
    }

    return 0;
}