#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s = "Apple is a good fruit";
    stack<char>st;
    int n = s.length();

    for(int i = 0; i < n;i++){
        st.push(s[i]);
    }

    for(int i = 0 ; i < n; i++){
        s[i] = st.top();
        st.pop();
    }
    cout<<s<<endl;

    return 0;
}