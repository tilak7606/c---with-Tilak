#include <iostream>
#include <bits/stdc++.h>
using namespace std;




class node{
    public :
    int data;
    node *next;
    
    // constructor :
    node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};



void display(node *tail){
    node *temp = tail;

    do{
        cout<<temp->data<<" ";
        temp =temp->next;
    }while(temp != tail);
    cout<<endl;
}


void insert(node *&tail,int element, int data){
    node *temp = new node(data);
    if(tail == NULL){
        tail = temp;
        temp -> next= tail;

    }
    else{
        node *curr = tail;
        while(curr ->data != element){
            curr = curr -> next;
        }
        temp -> next = curr -> next;
        curr -> next = temp;
    }


}



void deletion(struct node *&tail, int data){
    // empty list :
    if(tail == NULL){
        cout<<"list is empty "<<endl;
        return ;
    }
    else{
        node *prev = NULL;
        node *curr= tail;
        if(curr == prev){
            tail = NULL;
            return;
        }
        while(curr -> data != data){
            prev = curr;
            curr = curr -> next;
        }

        if(curr == tail){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }
}


bool is_circular(node *tail){
    if(tail == NULL)
    return false;
    
    node *curr = tail -> next;
    while(curr != tail)
    curr= curr -> next;

    if(curr == NULL)
    return false;
    
    return true;
}

// second method to check if the linked list is circular or not :

bool circular(node *tail){
    if(tail == NULL)
    return false;

    map<node*,bool>visited;
    node *temp = tail;

    while(temp != NULL){
        if(visited[temp] == true)
        return 1;

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}



int main()
{
    
node *tail = NULL;
insert(tail,12,1);
display(tail);
insert(tail,1,2);
display(tail);
insert(tail,2,3);
display(tail);
insert(tail,2,0);
display(tail);
insert(tail,3,5);
display(tail);
cout<<"After deletion "<<endl;
deletion(tail,5);
display(tail);
deletion(tail,0);
display(tail);
 

if(is_circular(tail))
cout<<"Linked List is circular "<<endl;
else
cout<<"Linked list is not circular "<<endl;


if(circular(tail))
cout<<"yes"<<endl;
else
cout<<"NOT "<<endl;
    return 0;
}