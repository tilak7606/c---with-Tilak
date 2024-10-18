#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int maxim(int *arr,int n){
    int maxi = arr[0];
    for(int i =0;i < n; i++){
        if(arr[i] > maxi)
        maxi = arr[i];

    }
    return maxi;
}

void count_sort(int *arr,int n){
    int maxi = maxim(arr,n);
    maxi += 1;

    int *count;

    count = (int *)calloc(maxi , sizeof(int));
    

    for(int i =0; i < maxi; i++){
        count[i] = 0;
    }


    for(int i = 0; i< n;i++){
        count[arr[i]]++;
    }

    for(int i = 1; i< maxi; i++){
        count[i] = count[i] + count[i-1];
    }

    int output[n];
    for(int i = n-1; i >= 0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i =0;i<n;i++){
        arr[i] = output[i];
    }
   




}



void display(int *arr,int n){
    for(int i =0; i < n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}



int main()
{
    int arr[14] = {2,5,4,8,9,7,8,5,1,4,7,88,5,4};
    count_sort(arr,14);

    //display(arr,14);

    return 0;
}