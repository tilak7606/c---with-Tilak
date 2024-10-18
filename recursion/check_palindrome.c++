#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int i,string s,int n){
    if(i >= n/2)
    return true;

    if(s[i] != s[n-i-1])
    return false;

   return check(i+1,s,n);
}

int main()
{   
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int n = s.size();
    bool ans = check(0,s,n);
    cout<<ans<<endl;


    return 0;
}