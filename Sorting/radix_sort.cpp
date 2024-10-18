#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getmax(int *arr,int n){
    int max = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i]> max)
        max = arr[i];
    }
    return max;
}


void count_sort(int *arr,int n,int exp){
    int count[10] = {0};
 

    for(int i = 0; i < n; i++){
        count[(arr[i] / exp)% 10]++;
    }
      

    // C . F : 
    for(int i = 1; i < 10;i++){
        count[i] += count[i-1];
    }
    

    int output[n];
     
 for (int i = n - 1; i >= 0; i--) {
        output[--count[(arr[i] / exp) % 10]] = arr[i];
        // count[(arr[i] / exp) % 10]--;
    }
    cout<<"hii"<<endl;
 

    for(int i =0 ;i < n ;i++){
        arr[i] = output[i];
    }
    
}



    


void radix_sort(int *arr,int n){
    
    int max = getmax(arr,n);
    
    
    for(int exp = 1; max/exp > 0; exp = 10 * exp){
        count_sort(arr,n,exp);
       
    }
}


void display(int *arr,int n){
     for(int i =0 ;i < n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}



int main()

{  int n;
cout<<"n ";
cin>>n;
int arr[n];

cout<<"array "<<endl;
for(int i =0 ; i < n ;i++){
    cin>>arr[i];
}
   

    // int arr[5] = {111,48,97,548,25};
    // int n = 5;


    radix_sort(arr,n);
    display(arr,n);

    

   
    return 0;
}