#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for (int j = 0; j < n; j++)
    {
        int curr = arr[j];
        while (curr)
        {
            if (curr % 10 == 4)
            {
                k++;
            }
            curr=curr/10;
        }
        
        cout<<k<<endl;
        k=0;
    }
    return 0;
}
