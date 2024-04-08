#include<iostream>
using namespace std;
struct emp{
    int a;
    string str;
    float salary;

};
typedef struct emp{
    int a;
    string str;
    float salary;

}ep;//now instead of struct emp you can write ep
int main(){
    struct emp library;
    library.a=69;
    library.str="hello";
    library.salary=10000000;
    cout<<library.a<<endl;
    cout<<library.str<<endl;
    cout<<library.salary<<endl;
    return 0;
}