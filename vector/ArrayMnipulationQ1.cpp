#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int arr[] = {1, 3, 6, 2, 1, 3, 2,7,6};
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count%2==0)
    //     {
    //         count=0;
    //         continue;
    //     }
    //     else{
    //         cout<<arr[i];
    //         break;
    //     }
        
    // }

    //urvi mam method
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++)
    {
        for (int j = i+1; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[i]==arr[j])
            {
                arr[i]=-1;
                arr[j]=-1;
            }
            
        }
        
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i]!=-1)
        {
            cout<<arr[i];
            break;
        }
        
    }
    
    

    return 0;
}