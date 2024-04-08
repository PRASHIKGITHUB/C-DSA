/*there are N stones,numbered 1,2,3.....N. for ecah i (1<=i<=N),the height of stone i is hi. there is a frog who is initially on stone
1,He will repeat the following action some number of times to reach stone N:
if the frog is currenyly on stone i,jump to stone i+1 or stone i+2.here, a cost of |hi-hj| is incurred ,where j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches stone N.*/
#include <iostream>

using namespace std;
int mod(int x)
{
    if (x >= 0)
    {
        return x;
    }
    else
        return (-1 * x);
}
int min(int a,int b){
    if (a>b)
    {
        return b;
    }
    else return a;
    
}
int frog(int *arr, int length, int ind)
{
    if (ind == length - 2)
    {
        return mod(arr[ind] - arr[ind + 1])+frog(arr,length,ind+1);
    }
    if (ind==length-1)
    {
        return 0;
    }
    
    
    return(min(frog(arr, length, ind + 2) + mod(arr[ind] - arr[ind + 2]),frog(arr, length, ind + 1) + mod(arr[ind] - arr[ind + 1])));
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << frog(arr, n, 0);
 
    return 0;
}