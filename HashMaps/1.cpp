#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation

    unordered_map<string, int> m;

    // insertion

    // 1
    m["babbar"] = 1;

    // 2
    pair<string, int> p = make_pair("mera", 4);
    m.insert(p);

    // 3
    pair<string, int> pp("tera", 1);
    m.insert(pp);

    // search
    cout << m["mera"] << endl;

    //************************
    cout << m["ba"] << endl; //it will create mapping corresponding to ba and initialize it with 0
    cout << m.at("ba") << endl;
    //*************************

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("ba")<<endl;
    cout<<m.count("hello")<<endl;

    //erase
    // m.erase("mera");
    cout<<m.size()<<endl;

    //iterator
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    unordered_map<string,int> :: iterator it=m.begin();
    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    
    return 0;
}