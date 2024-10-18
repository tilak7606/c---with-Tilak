#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int s);

 void input(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
}

int main()
{
    int arr[20];
    int n;
    cout<<"Enter the the size of array : ";
    cin>>n;
    int s;
    cout<<"Enter the search element : ";
    cin>>s;
    
    input(arr,n);
    int ans = search(arr,n,s);
    if(ans)
    cout<<"Element found : "<<endl;
    else
    cout<<"Element not found : "<<endl;
    // print(arr,n);
    // return 0;
}



int search(int arr[],int n,int s){

int start = 0, end = n-1;
int mid = (start + end )/2;
while(start <= end){

 mid = (start + end )/2;
 if(arr[mid] == s){
    return 1;
 }
else if(s < arr[mid])
end = arr[mid] - 1;

else
start = arr[mid] + 1;



}
return 0;
}