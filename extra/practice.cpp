
#include <iostream>
using namespace std;
#include<bits/stdc++.h>


string convert_binary(int n){
    string binary = "";
    while(n > 0){
        // binary += to_string((n % 2));
        binary += (n%2) + '0';
        n = n/2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}



int main()
{
   int n;
   cout<<"Enter the value of n : ";
   cin>>n;
   
   string binary = convert_binary(n);

   
   for(auto &i : binary){
       cout<<i;
   }
   cout<<endl;

    return 0;
}