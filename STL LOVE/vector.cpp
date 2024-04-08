#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl;
    cout << v.size() << endl;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;

    cout << v.capacity() << endl;

    vector<int> a(5, 1);
    vector<int> copy(a);
    return 0;
}