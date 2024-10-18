#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int fact(int n){
    if(n == 0)
    return 1;
    int choti = fact(n-1);
    int badi = n * choti;
    return badi;
}
*/


/*void count(int n){
   //base condition : 
   if(n == 0)
   return ;
   count(n-1);10

   cout<<n<<endl;
}*/


/*int tokipower(int n){
    // base condition :
    if( n == 0)
    return 1;
    int smallproblem = tokipower(n-1);
    int bigproblem = 2 * smallproblem;
    return bigproblem;
}
*/


/*void srctodes(int src, int dest){
    cout<<"source -> "<<src<<" "<<"destination -> "<<dest<<endl;
//base condition :
if(src == dest){
    cout<<"pauch gya  : ";
    return;
}

src++;
srctodes(src,dest);

}*/


/*void digittonum(int n ,string arr[]){
    // base condition : 
    if(n == 0)
    return ;
    int digit = n % 10;
    n = n / 10;
    digittonum(n,arr);
    cout<<arr[digit]<<" ";
}*/





int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    // int ans = fact(n);
   //int ans =  tokipower(n);
   //cout<<ans<<endl;
   // count(n);
    // cout<<ans<<endl;

    // srctodes(1,10);

    // string arr[] = {"zero","one","two","three","four","five","six","seven",
    //                                     "eight","nine"};


    //    digittonum(n,arr);                                 




    return 0;
}