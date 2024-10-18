#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int a,int b){

if(b == 0)
return 1;
if(b == 1)
return a;

long long int ans = pow(a,b/2);

if(b % 2 == 0)
return ans * ans;
else
return a * ans *ans;



}

bool pall(string str ,int i ,int j){
     // base condition :
     if(i > j)
     return true;
     if(str[i] != str[j])
     return false;
     else
     i++; j--;
     pall(str,i,j);
}

int main()
{
    int a,b;
    cout<<"Enter the no. and the power"<<endl;
    cin>>a>>b;
    long long int ans = pow(a,b);
    cout<<ans<<endl;

    // string str;
    // cout<<"Enter a string "<<endl;
    // cin>>str;
    // if(pall(str,0,str.length()-1))
    // cout<<"It is a pallindrome "<<endl;
    // else
    // cout<<"It is not a pallindrome"<<endl;

    return 0;
}