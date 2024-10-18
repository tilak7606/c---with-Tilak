#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// index of first occurence : with loop : 


int firstocc(int *arr,int size,int key){
  
  int first = 0,ans;
  int last = size - 1,mid;
  while(first <= last){
 mid = (first + last)/2;
 if(arr[mid] == key){
     ans = mid;
     last = mid - 1;
 }
 else if(arr[mid] > key){
    last = mid -1;

 }
 else 
  first = mid + 1;


  }

return ans;

}


// index of last occurence with loop : 
int lastocc(int *arr,int size,int key){
  
  int first = 0,ans;
  int last = size - 1,mid;
  while(first <= last){
 mid = (first + last)/2;
 if(arr[mid] == key){
     ans = mid;
     first = mid + 1;
 }
 else if(arr[mid] > key){
    last = mid -1;

 }
 else 
  first = mid + 1;


  }

return ans;

}


int rec(int *arr,int size,int key,int first,int last){

if(first > last)
return -1;

int mid = (first + last)/2;

if(mid == 0|| (arr[mid] == key && arr[mid] > arr[mid - 1]))
return mid;
else if(key > arr[mid])
return (rec(arr,size,key,mid+1,last));
else
return (rec(arr,size,key,first,mid-1));

}

int reclast(int *arr,int size ,int first,int last, int key)
{

if(first > last){
  return -1;
}
int mid = (first + last)/2;
if(mid == last || arr[mid] < arr[mid + 1] && arr[mid] == key )
return mid;

else if(key > arr[mid])
return (reclast(arr,size,mid + 1,last , key));
else
return (reclast(arr,size,first,mid - 1,key));



}

int asahi(int *arr,int n,int key){
  int s = 0;
  int e = n-1;
  int ans = -1;
  int mid = (s + e)/2;
  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      e = mid - 1;

    }
    else if(arr[mid] < key){
      s = mid + 1;
    }
    else
    e = mid - 1;
    mid = (s + e)/2;

  }
  return ans;
}
int main()
{
    int arr[6] = {1,2,2,3,4,4};
    cout<<asahi(arr,6,1)<<endl;

    //int ans = firstocc(arr,5,2);

    // cout<<"The index of first occurence of the 3 is -> "<<ans<<endl;

    //int ans1 = lastocc(arr,5,2);

    // cout<<"The index of last occurence of the 3 is -> "<<ans1<<endl;

    //  int ans3 =  recfirst(arr,0,4,2);

    //    cout<<"The index of first occurence of the 3 is -> "<<ans3<<endl;


     // total no of occurance is : 
   // int final = (ans + ans1) - 1;// sahi chal rha hai code : 
   // cout<<final<<endl;

  //  int recfirst = rec(arr,5,4,0,4);    //arr,size,key, first, last :
  //  int reclas = reclast(arr,5,0,4,4);  //arr, size, first , last, key : 
    
  //   cout<<reclas<<endl;
  //  cout<<recfirst<<endl;
    return 0;
}