/*Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)*/
#include <iostream>
#include <vector>
using namespace std;
int rectangleSum(vector<vector<int>> array, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum = sum + array[i][j];
        }
    }
    return sum;
}
int main()
{
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
    int l1, r1, l2, r2;
    cout << "Enter the values of l1,r2 respectively" << endl;
    cin >> l1 >> r1;
    cout << "Enter the values of l2,r2 respectively" << endl;
    cin >> l2 >> r2;
    int ans = rectangleSum(array, l1, r1, l2, r2);
    cout<<ans<<endl;
    return 0;
}