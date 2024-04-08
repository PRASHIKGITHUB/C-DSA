#include <iostream>
#include <vector>
using namespace std;
int MaximumOnesRow(vector<vector<int>> v)
{
    int maxones = -100;
    int maxOnesRow = -1;
    int columns = v[0].size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (v[i][j] == 1)
            {
                int numberOfOnes = columns - j;
                if (numberOfOnes > maxones)
                {
                    maxones = numberOfOnes;
                    maxOnesRow = i;
                }

                break;
            }
        }
    }
    return maxOnesRow;
}
int main()
{
    int ans;
    int r, c;
    cin >> r >> c;
    vector<vector<int>> array(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> array[i][j];
        }
    }
    ans = MaximumOnesRow(array);
    cout << ans;

    return 0;
}