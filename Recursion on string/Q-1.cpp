/* Remove all the occurrence of 'a' from string s="abcax" */
#include <iostream>
using namespace std;
string f(string &str, int idx, int n)
{
    if (idx == n)
    {
        return "";
    }
    string current = "";
    current += str[idx];
    if (str[idx] == 'a')
    {
        return "" + f(str, idx + 1, n);
    }
    else
    {
        return current + f(str, idx + 1, n);
    }

    // return ((str[idx] == 'a') ? "" : current) + f(str, idx + 1, n);---->if else in short form
}

int main()
{
    string str = "abca";
    cout << str[0];
    // cout<<f(str,0,4);

    return 0;
}