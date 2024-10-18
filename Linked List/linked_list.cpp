#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor :
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
        
}

// insertion at head :
void insert_at_head(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

// Display Function :

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insertion at end :

void insert_at_tail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

// insertion at any index || starting || end :

void insert_at_index(node *&head, node *&tail, int data, int index)
{
    if (index == 1)
    {
        insert_at_head(head, data);
        return;
    }

    node *p = head;
    int cnt = 1;
    while (cnt < index - 1)
    {
        p = p->next;
        cnt++;
    }
    if (p->next == NULL)
    {
        insert_at_tail(tail, data);
        return;
    }
    node *temp = new node(data);
    temp->next = p->next;
    p->next = temp;
}

// Deletion :

void delete_at_head(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void delete_at_tail(node *&head)
{
    node *p = head;
    node *q = NULL;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL; 
    delete p;
}

void delete_at_index(node *&head, int index)
{
    if (index == 0)
        return;

    if (index == 1)
    {
        node *p = head;
        head = head->next;
        delete p;
        return;
    }
    node *curr = head;
    node *prev = NULL;
    int cnt = 1;
    while(cnt < index){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    prev -> next = curr -> next;
    delete curr;
}




bool is_circular(node *head){
    if(head == NULL)
    return false;

    node *curr = head -> next;
    while(curr != NULL && curr != head){
        curr = curr -> next;
    }
    if(curr == NULL)
    return false;

    return true;
}


bool circular(node *head){
    if(head == NULL)
    return false;

    map<node*,bool>visited;

    node *curr = head;
    while(curr != NULL){
        if(visited[curr]== true)
        return true;
        
        visited[curr]= true;
        curr = curr -> next;
    }
    return false;
}



// floyd's algorithm to detect the cycle in a linked list : 
 
bool detect(node *head){
    if(head == NULL || head -> next == NULL)
    return false;
    
    node *slow = head;
    node *fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        slow = slow -> next;
        if(fast != NULL){
            fast =fast -> next;
        }
        if(fast == slow)
        return true;
    }
    return false;
}







int main()
{
    node *hero = new node(10);
    node *head = hero;
    node *tail = hero;
    // node* villen = new node(20);

    // cout<<"Before head "<<endl;
    // cout<<head->data<<endl;

    insert_at_head(head, 12);
    // cout<<"After head"<<endl;
    // cout<<head -> data<<endl;
    insert_at_head(head, 45);
    // cout<<head->data<<endl;
    // cout<<head->next->next->data<<endl;

    insert_at_tail(tail, 1);

    print(head);
    insert_at_index(head, tail, 5, 1);

    print(head);
    insert_at_index(head, tail, 13, 2);
    print(head);

    insert_at_index(head, tail, 50, 7);
    print(head);

    /*
        delete_at_head(head);
        print(head);
        delete_at_head(head);
        print(head);


        delete_at_tail(head);
        print(head);
        delete_at_tail(head);
        print(head);
        delete_at_head(head);
        print(head);

        */

    delete_at_index(head, 2);
    print(head);



    if(is_circular(head))
    cout<<"Linked list is circular "<<endl;
    else
    cout<<"Linked list is not circular "<<endl;


    

    if(circular(head))
    cout<<"Linked list is circular "<<endl;
    else
    cout<<"Linked list is not circular "<<endl;


    if(detect(head))
    cout<<"yes "<<endl;
    else
    cout<<"not "<<endl;

    /*
        cout<<hero->data<<endl;
        cout<<hero -> next<<endl;
        cout<<villen -> data<<endl;
        cout<<villen -> next <<endl;

        */

    return 0;
}