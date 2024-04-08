#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout<<l.size()<<endl;
    l.pop_back();
    l.pop_front();
    list<int> n(l);
    list<int> k(5,100);
    // l.erase(l.begin());
    
    return 0;
}