#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue{
    public :
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];

    }


    void enqueue(int data){
        if(is_full()){
            cout<<"Queue is full "<<endl;
            return;
        }
        rear++;
        arr[rear] = data;
        return;
    }

    void pop(){
        if(is_empty()){
            cout<<"Queue is empty : "<<endl;
            return;
        }
        arr[front] = -1;   
        front++;
           
    }
    
    bool is_empty(){
        if(front == rear)
        return true;

        return false;
    }

    bool is_full(){
        if(rear == size-1)
        return true;

        return false;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
     q.enqueue(10);
    // q.enqueue(20);
    //  q.enqueue(10);
    // q.enqueue(20);

    if(q.is_full()){
        cout<<"Queue is Totally full : "<<endl;
    }
    else{
        cout<<"Queue is Not full : "<<endl;
    }

   if(q.is_empty())
   cout<<"Yes : "<<endl;
   else
   cout<<"No : "<<endl;
   q.pop();
   q.pop();
   
   if(q.is_empty())
   cout<<"Yes : "<<endl;
   else
   cout<<"No : "<<endl;

   q.pop();

   
    if(q.is_full()){
        cout<<" 1 "<<endl;
        cout<<"Queue is Totally full : "<<endl;
    }
    else{
        cout<<"Queue is Not full : "<<endl;
    }

   

    return 0;
}