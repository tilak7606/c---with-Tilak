#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// FLOATING WINDOW ALGORITHM : \



int getmax_sum(vector<int>&arr,int k){
    int window_sum = 0;
    int max_sum = 0;
    int n = arr.size();

    for(int i = 0; i < k;i++){
        window_sum += arr[i];                 // calculating the startig sum of window : 
    }

    for(int i = k; i < n ;i++){
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum,window_sum);             // fist value ko minus kardo end vali ko add krdo : 
   }

   return max_sum;
}


int main()
{
    //here we are going to do is FLOTING WINDOW ALGORITHM :

    vector<int>arr = {2,-1,3,5};

    int k = 2;

    int ans = getmax_sum(arr,k);

    cout<<ans<<endl;

    return 0;
}