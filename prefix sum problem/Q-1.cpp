/*Given an integers array 'a', return the prefix sum/ running sum in the same array without creating a new array*/
#include <iostream>
#include <vector>
using namespace std;
void RunningSum(vector<int> &v)
{
    int sum = 0;
    for (int i = 1; i < v.size(); i++)
    {
       v[i]=v[i]+v[i-1];
    }
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
    RunningSum(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}