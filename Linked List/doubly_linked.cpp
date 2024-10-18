#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class node{
    public : 
    int data;
    node *next;
    node *prev;

    // constructor :
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};



void print(node *head){
    while(head != NULL){
        cout<<head -> data <<" ";
        head = head-> next;
    }
    cout<<endl;
}


void insert_head(node *&head,node *&tail,int data){
    node *temp = new node(data);
    if(head == NULL){
        head = temp;
        tail = temp;

    }
    else{
        temp -> next = head;
        head -> prev = temp;

        head = temp;

    }
}


void insert_tail(node *&tail,node *&head,int data){
    node *temp = new node(data);
    if(head == NULL){
      head = temp;
      tail =temp;
 
    }
    else{
        tail -> next = temp;
        temp ->prev = tail;
        tail = temp;
        
    }
}


void insert_index(node *&head,node *&tail, int data,int index){
   
    if(index == 1){
        insert_head(head,tail,data);
        return;
    }

    int i = 1;
    node *p = head;
    while(i  < index -1 && p != NULL){
        p = p -> next;
        i++;
    }
    if(p -> next == NULL ){
    insert_tail(tail,head,data);
    return;
    }

    node *temp = new node(data);

    temp -> next = p->next;
    p->next->prev = temp;
    p->next = temp;
    temp ->prev = p;

}




void delete_head(node *&head,node *&tail){
    if(head == NULL)
    return;
    if(head -> next == NULL){
        node *temp = head;
        delete temp;
    }
    else{
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp -> next = NULL;
        delete temp;
    }
}


void delete_tail(node *&tail,node *head){
    if(head == NULL)
    return;
    node *p = head;
    node *q = NULL;
    while(p -> next != NULL){
        q = p;
        p = p -> next;
    }

    tail = q;
    tail -> next = NULL;
    delete p;
}


void delete_index(node *&head,node *&tail,int index){
    if(index == 1 ){
        delete_head(head,tail);
        return;
    }
    node *p = head;
    node *q = NULL;
    int i = 1;
    while(i < index){
        q= p;
        p = p-> next;
        i++;
    }
    if(p -> next == NULL){
        delete_tail(tail,head);
        return;
    }
    else{
        q->next = p->next;
        p->next->prev = q;
        p ->next = NULL;
        p -> prev =NULL;
        
        delete p;
    }

}


void create(node *&head,node*&tail){
    node *p = head;
    node *last = NULL;
    int size;
    cout<<"Enter the size of the linked list : ";
    cin>>size;
    if(head == NULL){
        cout<<"Enter the data of head : ";
        // cin>>head->data;
        int data;
        cin>>data;
        head->data = data;
    }
    cout<<"Enter the elements of the linked list  : "<<endl;
    for(int i =0; i < size;i++){
        int data;
        cin>>data;
        node *temp = new node(data);
        p -> next = temp;
        temp ->prev =p;
        p = temp;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    create(head,tail);
    print(head);
    
    // insert_head(head,tail,10);
    // print(head);

    // cout<<"head = "<<head->data<<endl;
    // cout<<"tail = "<<tail->data<<endl;
    
    // insert_head(head,tail,20);
    // print(head);
    // cout<<"tail-> prev = "<<tail->prev->data<<endl;
    // cout<<"head = "<<head->data<<endl;
    // cout<<"tail = "<<tail->data<<endl;

    // insert_tail(tail,head,30);
    // print(head);
    // cout<<"head = "<<head->data<<endl;
    // cout<<"tail = "<<tail->data<<endl;

    // insert_index(head,tail,15,3);
    // print(head);
    // cout<<"head = "<<head->data<<endl;
    // cout<<"tail = "<<tail->data<<endl;

    // delete_head(head,tail);
    // print(head);

    // delete_tail(tail, head);
    // print(head);

    // insert_tail(tail,head,30);
    // print(head);


    // insert_tail(tail,head,30);
    // print(head);


    // delete_index(head,tail,3);
    print(head);


    

    

    return 0;
}