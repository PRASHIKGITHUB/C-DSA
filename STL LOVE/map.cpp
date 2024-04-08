#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;

    m[1]="babbar";
    m[13]="love";
    m[2]="kumar";

    m.insert({5,"bheem"});
    m[5]="hello";

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13 --> "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;

    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}