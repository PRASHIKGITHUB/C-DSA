#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    d.pop_front();
    cout<<d.size()<<endl;
    d.push_back(1);
    d.push_front(2);
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d.at(i)<<" ";
    }
    
    

    return 0;
}