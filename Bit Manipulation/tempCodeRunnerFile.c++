#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert_Decimal(string &Binary){
    int val = 0;
    int pow2 = 1;

    for(int i = Binary.length()-1; i>= 0;i--){
        if(Binary[i] == '1')
        val += pow2;

        pow2 *= 2;
    }
    return val;
}



int main()
{
    string s;
    cout<<"Enter the string  : ";
    cin>>s;

    int val = convert_Decimal(s);
    cout<<val<<endl;


    return 0;
}