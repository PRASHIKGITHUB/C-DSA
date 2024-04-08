#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}