/*Given Q queries, check if the given number is present in the array or not.
note:value of all the elements in the array is less than 10 to the power 5.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "enter the elements in your vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    cout << "Enter number of quires :" << endl;
    int q;
    cin >> q;
    int i = 1;
        while (q--)
    {
        cout << "enter query number " << i++<<endl;
        int quireyElement;
        cin >> quireyElement;
        cout << quireyElement << " is present " << freq[quireyElement] << " times in vector" << endl;
    }

    return 0;
}