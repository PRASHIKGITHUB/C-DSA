/*print all the sub strings of a given string*/
#include <iostream>
#include <vector>
using namespace std;
void f(string &str, int i, string result, vector<string> &final)
{
    if (i == str.length())
    {
        final.push_back(result);
        return;
    }
    f(str, i + 1, result + str[i], final);
    f(str, i + 1, result, final);
}
int main()
{
    string str = "abc";

    vector<string> final;
    f(str, 0, "", final);
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}