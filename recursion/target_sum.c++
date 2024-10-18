#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fun(int idx,int sum,int target_sum,vector<int>&arr,vector<int>&ans){
    // base case :
    if(idx >= arr.size()){
        if(sum == target_sum){
            for(auto &i: ans){                                                          //same as the subset question :
                cout<<i<<" ";
            }
            cout<<endl;
        }
      
        return;
    }
    
    if(sum > target_sum)
    return;

    // take :
    sum += arr[idx];
    ans.push_back(arr[idx]);
    fun(idx+1,sum,target_sum,arr,ans);
    
    // not take :
    sum -= arr[idx];
    ans.pop_back();
    fun(idx+1,sum,target_sum,arr,ans);
}

int main()
{
    vector<int>arr = {1,2,1};
    vector<int>ans;
    int target_sum;
    cout<<"enter the target sum : ";
    cin>>target_sum;

    int sum = 0;
    int idx = 0;
    fun(idx,sum,target_sum,arr,ans);


    return 0;
}