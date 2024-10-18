#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

// top element :
cout<<"The top element is : "<<st.top()<<endl; 

// pop :
st.pop();

cout<<"The top element is : "<<st.top()<<endl; 

st.pop();

cout<<"The top element is : "<<st.top()<<endl; 

if(st.empty()){
    cout<<"Stack is empty "<<endl;

}
else{
    cout<<"Not empty : "<<endl;
    }

    // size :
    cout<<"The size of the stack is  : "<<st.size()<<endl;

    st.pop();
    st.pop();
    st.pop();

    
if(st.empty()){
    cout<<"Stack is empty "<<endl;

}
else{
    cout<<"Not empty : "<<endl;
    }
    
    cout<<"The size of the stack is  : "<<st.size()<<endl;




    

    return 0;
}