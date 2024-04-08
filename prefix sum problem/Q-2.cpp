/*Check if we can partition the array into two subarrays with equal sum. More formally,check that the prefix sum of a part
of the array is equal to the suffix sum of rest of the array.*/
#include <iostream>
#include <vector>
using namespace std;
bool CheckPrefixSuffixSum(vector<int> &v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
    }
    int preSum = 0;
    int sufSum;
    for (int i = 0; i < v.size(); i++)
    {
        preSum = preSum + v[i];
        sufSum = sum - preSum;
        if (preSum == sufSum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    cout<<CheckPrefixSuffixSum(v)<<endl;

    return 0;
}