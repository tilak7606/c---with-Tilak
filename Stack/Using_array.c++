#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{
    public :
    int *arr;
    int size;
    int top;

    // constructor :
    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];

    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is Overflow : "<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is Underflow : "<<endl;
        }
        else{
            top--;
        }
    }

    int peak(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty : "<<endl;
            return -1;
        }
    }

    bool is_empty(){
        if(top == -1)
        return true;
        else
        return false;
    }

};

int main()
{
    
 Stack st(5);
 st.push(1);
 st.push(2);
 st.push(3);

 cout<<"The top is : "<<st.peak()<<endl;

 st.pop();

 cout<<"The top is : "<<st.peak()<<endl;

 if(st.is_empty()){
    cout<<"Yes it is empty : "<<endl;
 }
 else{
    cout<<"NO It is Not empty : "<<endl;
 }

 st.pop();
 cout<<"The top is : "<<st.peak()<<endl;

  st.pop();
 cout<<"The top is : "<<st.peak()<<endl;

 
 if(st.is_empty()){
    cout<<"Yes it is empty : "<<endl;
 }
 else{
    cout<<"NO It is Not empty : "<<endl;
 }

 
 


 
    return 0;
}