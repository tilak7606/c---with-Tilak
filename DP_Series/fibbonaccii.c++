#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//top down approach :
int fibbo(int n, vector<int>&dp){
    // base case :
    if(n <= 1)                         // T.C = o(n)
    return n;
    
    // check if already calculated or not :
    // step 3
    if(dp[n] != -1)
    return dp[n];
    
    // setp 2
    dp[n] = fibbo(n-1,dp)+fibbo(n-2,dp);
    return dp[n];
}



int main()
{
 int n;
 cin>>n;
 // step 1
 vector<int>dp(n+1,-1);
 cout<<fibbo(n,dp)<<endl;

 // bottom up approach :
 vector<int>DP(n+1,0);          // space = O(n) and T.C = O(n)
 DP[0] = 0;
 DP[1] = 1;
 
 for(int i = 2; i <= n;i++){
    DP[i] = DP[i-2] + DP[i-1];
 }
 cout<<DP[n]<<endl;

 // space optimzation :
 int prev1= 1;
 int prev2 = 0;
 
for(int i = 2; i<= n;i++){
  int curr = prev1 + prev2;
  // shifting logic :
  
  prev2 = prev1;        // space = (1) -- T.c = O(n)
  prev1 = curr;
}

cout<<prev1<<endl;

    return 0;
}