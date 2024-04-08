#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
   cout<< s.empty();
    return 0;
}