#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int peak(vector<int>  arr){
int first =  0;
int last = (arr.size() - 1), mid;
while(first < last ){
 mid = (first + (last - first) /2 );  // peak value in an array || we can say maximum elemnt in an mountain array : 
 if(arr[mid] < arr[mid + 1])
 first = mid + 1;
 else 
 last = mid;
}

arr.pop_back();

return first;


}
*/

// recursion solution :

/*

int recpeak(vector<int> &v,int s,int l){
// base condition :
 if(s > l)
 return -1;
 int mid = (s + l)/ 2;
 if(v[mid] < v[mid - 1] && v[mid] > v[mid + 1])
 return v[mid];
 else if(v[mid] < v[mid + 1])
 return (v,mid + 1,l);
 else
 return(v, s,mid );

}
*/




int main()
{
    
vector<int>arr{3,4,5,8,4,2,1};
//int ans = peak(arr);           // iterative method : 
//cout<<ans<<endl;
int s = 0,l = (arr.size() - 1);

int rec = recpeak(arr,s,l);      // recursive method : 
cout<<rec<<endl;
    return 0;
}