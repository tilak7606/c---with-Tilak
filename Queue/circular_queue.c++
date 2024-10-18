#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class circular_queue{

    public : 
    int *arr;
    int size;
    int front;
    int rear;

    circular_queue(int size){
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    void enqueue(int data){
        if(is_full()){
            cout<<"Queue is full : "<<endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size && front != 0)
        rear = 0;

        else
        rear++;

        arr[rear] = data;
    }

    void dequeue(){
        if(is_empty()){
            cout<<"Queue is empty : "<<endl;
            return;
        }

        else if(front == rear)// i.e only one element is left :
        {
            rear = front = -1;
        }
        else if(front == size-1)
        front = 0;

        else front++;
        }


        bool is_empty(){
            if(front == -1)
            return true;

            return false;
        }
        bool is_full(){
            if((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
            return true;

            return false;
        }
};



int main()
{
    circular_queue q(5);

        
    if(q.is_empty())
    cout<<"Queue is empty : "<<endl;
    else 
    cout<<"Queue is Not empty : "<<endl;


    q.enqueue(10);
    q.enqueue(20);
    
    if(q.is_empty())
    cout<<"Queue is empty : "<<endl;
    else 
    cout<<"Queue is Not empty : "<<endl;
    
    q.dequeue();
    q.dequeue();
    cout<<"Yes "<<endl;
    q.dequeue();


     q.enqueue(10);
    q.enqueue(20);
     q.enqueue(10);
    q.enqueue(20);
     q.enqueue(10);
     q.enqueue(20);


    return 0;
}