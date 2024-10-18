#include <iostream>
#include <bits/stdc++.h>
using namespace std;



/*
int sort(int arr[], int l ,int h){                  //lumoto partition : 
    int i = l -1;
     
     int pivot = arr[h];
     for(int j = l; j <= h;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        swap(arr[i+1],pivot);
     }
     return i+1;
}

*/






int partition(int *arr,int s, int e){
    int cnt = 0;
    int pivot = arr[s];
    for(int i = s+1; i <=e;i++){
        if(arr[i] <= pivot)
        cnt++;
    }

    
    //pivot element ko right place pe rakh do : 
    int pivotindex = s+cnt;
    swap(arr[pivotindex],arr[s]);

    //left part aur right part ko apni jagha paucha do : 
    int i = s,j = e;
     while(i < pivotindex && j >pivotindex){
    

        while(arr[i] <= pivot){
        i++;
        }
        
        while(arr[j] > pivot){
        j--;
        }
        
        if(i < pivotindex && j > pivotindex)
        swap(arr[i++] , arr[j--]);
    }
    return pivotindex;

}

// int partition(int *arr, int s, int e) {
//     int pivot = arr[s];
//     int i = s, j = e;

//     while (i < j) {
//         while (arr[i] <= pivot && i < e)
//             i++;
//         while (arr[j] > pivot && j > s)
//             j--;
//         if (i < j) {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[s], arr[j]);
//     return j;
// }





void quick_sort(int *arr,int s,int e){
    if(s >= e)
    return;
    cout<<"hi"<<endl;
    
    int p = partition(arr,s,e);

    // left part sort kardo : 
    quick_sort(arr,s,p-1);

    // right part sort kardo : 
    quick_sort(arr,p+1,e);
}










int main()
{
    int arr[] = {100,9, 0, 800,6};
    //sort(arr,0,5);
    int s=0,e = 5;

    quick_sort(arr,s,e-1);




    for(int i =0 ; i < e;i++)
    cout<<arr[i]<<" ";

    return 0;
}


    