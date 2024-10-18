#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    // int n;
    // cout<<"Enter the size of the array : "<<endl;
    // cin>>n;

    // cout<<"Enter elements "<<endl;
    // vector<int>arr(n,0);

    // for(int i = 0; i< n;i++){
    //     cin>>arr[i];
    // }
    
    // unordered_map<int,int>mp;
    // for(int i = 0; i< arr.size(); i++){
    //     mp[arr[i]]++;
    // }

    // // for(int i = 0; i< arr.size();i++){
    // //     cout<<"element << "<<arr[i] <<"->"<<mp[arr[i]];
    // //     cout<<endl;
    // // }


    // int query;
    // cout<<"Enter the query :";
    // cin>>query;
    // while(query--){
    //     int number;
    //     cin>>number;
    //     cout<<number<<"->"<<mp[number]<<endl;
    // }


    map<string,int>mpp;

    pair<string,int>p = make_pair("Tilak",1);
    mpp.insert(p);
    cout<<mpp.at("Tilak")<<endl;
    mpp["Saini"] = 2;

    cout<<mpp.at("Saini")<<endl;
    cout<<mpp["Saini"]<<endl;


    return 0;
}