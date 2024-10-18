#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char convert_to_uppar(char ch){
    if(ch >= 'A' && ch <= 'Z')
    return ch;                          // function to convert lower case uppar to  case : 
    else{
        ch = ch - 'a' + 'A';
        
    }
    return ch;
}

char convert_to_lower(char ch){
    if(ch >= 'a' && ch <= 'z')
    return ch;                                 // function to convert Uppar case to lower case : 
    else
    ch = ch - 'A' + 'a';
    return ch;
}


int main()
{

    char ch = 'a';
 ch = convert_to_uppar(ch);
 cout<<ch<<endl;
 
 cout<<convert_to_lower(ch)<<endl;
    

    return 0;
}