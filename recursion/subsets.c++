#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int idx,vector<int>&arr,vector<int>&ans){
    // base case :
    if(idx >= arr.size()){
        for(auto &i : ans){
            cout<<i<<" ";
        }                                                    // T.C = O(2^n * n) extra n is for forloop printing the elements of the ans array :
        cout<<endl;                                          // S.C = O(n) :
        return;
    }

    // take :
    ans.push_back(arr[idx]);
    // call :
    fun(idx+1,arr,ans);
    // not take :
    ans.pop_back();
    fun(idx+1,arr,ans);
}

int main()
{
    vector<int>arr = {3,1,2};
    vector<int>ans;
    int idx = 0;
    fun(idx,arr,ans);

    return 0;
}