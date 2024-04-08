#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    int data;
};
class Stack
{
public:
    int *arr;
    int size;
    int top;
    node* tail;
    node* head;
    Stack(int size)
    {
        this->size=size;
        tail=NULL;

    }
    void push(int d){
        node* temp=new node;
        temp->data=d;
        tail=temp;
    }
};
int main()
{
    return 0;
}