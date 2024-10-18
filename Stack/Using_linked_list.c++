#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this -> next = NULL;
    }
};


class Stack{
    public :
    void push(Node *&top ,int val,int &size){
        if(size != 0){
            size--;
            Node *temp = new Node(val);
            temp -> next = top;
            top = temp;
        }
        else
        cout<<"Stack Overflow : "<<endl;
    }

    void pop(Node *&top){
        if(!is_empty(top))
        top = top->next;
        else{
            cout<<"Stack Underflow : "<<endl;
            return;
        }
    }

    bool is_empty(Node *top){
        if(top == NULL)
        return true;
        return false;
    }

    int gettop(Node *top){
        if(!is_empty(top))
        return top->data;
        else{
            cout<<"Stack is empty : "<<endl;
            return -1;
        }
    }

    
};


void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main()
{
    Node *top = NULL;
    int size = 5;

    Stack st;
    st.push(top,1,size);
    st.push(top,2,size);
    st.push(top,3,size);
    st.push(top,4,size);
    st.push(top,5,size);
    st.push(top,6,size);
    
    print(top);
    
    cout<<"The top element of the stack is : "<<st.gettop(top)<<endl;

    st.pop(top);

    cout<<"The top element of the stack is : "<<st.gettop(top)<<endl;

    st.pop(top);

    cout<<"The top element of the stack is : "<<st.gettop(top)<<endl;

     if(st.is_empty(top))
    cout<<"Stack is empty : "<<endl;
    else{
    cout<<"Not empty : "<<endl;
    }

    st.pop(top);
    st.pop(top);
    st.pop(top);

    cout<<"The top element of the stack is : "<<st.gettop(top)<<endl;

    if(st.is_empty(top))
    cout<<"Stack is empty : "<<endl;
    else{
    cout<<"Not empty : "<<endl;
    }




    

    return 0;
}