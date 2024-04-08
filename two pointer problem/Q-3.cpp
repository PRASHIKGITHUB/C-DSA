/*Given an integer array 'a' sorted in non-decreasing order, return an array of the squareds of each number
sorted in non-decreasing order.*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int abt(int a)
{
    if (a < 0)
    {
        return a * (-1);
    }
    else
    {
        return a;
    }
}
void SortedSquareArray(vector<int> &v)
{
    cout<<"hello"<<endl;
    vector<int> ans;
    int rightind = v.size() - 1;
    int leftind = 0;
    while (leftind <= rightind)
    {
        if (abt(v[rightind])<abt(v[leftind]))
        {
            ans.push_back(v[leftind]*v[leftind]);
            leftind++;
        }
        else{
            ans.push_back(v[rightind]*v[rightind]);
            rightind--;
        }
    }
    for (int i = v.size()-1; i >=0 ; i--)
    {
        cout<<ans[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    SortedSquareArray(v);
    return 0;
}