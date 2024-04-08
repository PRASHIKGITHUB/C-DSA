#include <bits/stdc++.h> 
using namespace std;
class CircularQueue{
    public:
    // Initialize your data structure.
    int * arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
        // Write your code here.
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)) ){
            return false;
        }
        else if(front==-1 ){
            front=rear=0;
            
            
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true; 
        // Write your code here.
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){ //single element is present
        front=rear=-1;

        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};