#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"The size of the queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"The size of the queue is : "<<q.size()<<endl;

    cout<<"The front element is : "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty : "<<endl;
    } 
    else{
        cout<<"Queue is Not empty : "<<endl;
    }

    return 0;
}