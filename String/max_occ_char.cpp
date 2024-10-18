#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char max(string s){
    int arr[26] = {0};
    int num= 0;
    for(int i = 0; i < s.length();i++){
        num = s[i] - 'a';
        arr[num]++;
    }
   int max = -1,ans =0;

    for(int i = 0; i < 26; i++){
       if(max < arr[i]){
        max = arr[i];
        ans = i;
       }
    }
    return (ans +'a');
}


int main()
{
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    char ch = max(s);
    cout<<ch<<endl;

    return 0;
}