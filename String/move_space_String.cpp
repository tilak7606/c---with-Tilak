#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string remove(string s){
    int index =0; 
    for(int i =0 ; i< s.length()-1;i++){
        int count = 1;
        int j = i;
        for(; j < s.length() && s[j] == s[j + 1];j++ ){
            count++;

        }
        s[index] = s[i];
        index++;
        if(count > 1){
            s[index] = count;
            index++;
        }
        i = j + 1;
    }
}

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    s = remove(s);
    cout<<s<<endl;
    return 0;
}



