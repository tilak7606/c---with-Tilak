
#include <iostream>
#include<bits/stdc++.h>

using namespace std;


bool binarysearch(int* arr, int first, int last, int key ){
  // base condition :
  
  // if not found -> 
  if(first > last)
  return false;
  
  int mid= (first + last)/2;
  // if found ->
  if(arr[mid] == key)
  return true;
  
  if(key > arr[mid])
  return binarysearch(arr,first,mid-1,key);
  
  if(key<arr[mid])
  return binarysearch(arr,mid+1,last,key);
    
}

int main()
{
int arr[5] = {5,4,3,2,1};
int key = 5;
cout<<binarysearch(arr,0,5,key);

    return 0;
}
