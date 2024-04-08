#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> PascleTriangle(int n)
{
    vector<vector<int>> Pascle(n);
    for (int i = 0; i < n; i++)
    {
        Pascle[i].resize(i + 1);
        for (int j = 0; j < i + 1; j++)
        {

            if (j == i || j == 0)
            {
                Pascle[i][j] = 1;
            }
            else
            {
                Pascle[i][j] = Pascle[i - 1][j] + Pascle[i - 1][j - 1];
            }
        }
    }
    return Pascle;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans;
    ans = PascleTriangle(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}