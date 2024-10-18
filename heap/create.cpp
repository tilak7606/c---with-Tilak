#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        size = 0;
    }

    void insert(int val)
    {
        size += 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "Empty hai insert karo :" << endl;
            return;
        }
        // step 1 : put last element into the first place :
        arr[1] = arr[size];
        // last node delete kar do :
        size = size - 1;
        

        int i = 1; // ye root node ko point karaga :
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (leftindex < size && arr[i] < arr[leftindex])
            { // condition ko sahi se samaj aur dry run kar tu kuch bhi kar sakta hai  :
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return; // yeni ki sab kuch sahi hai :
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};


    void heapify(int *arr,int n,int i){
        int largest = i;
        int left = 2 * i;
        int right = 2 * i+ 1;
        if(left <= n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right <= n && arr[largest] <  arr[right]){ // time O(log n)
            largest = right;
        }

        if(largest != i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }


    void heapsort(int arr[],int n){
        int size = n;
        while(size > 1){
            //step 1 : swap kardo :
            swap(arr[size] , arr[1]);
            size--;
            
            //step 2 : correct position pe paucha do root ko :
            heapify(arr,size,1);
        }
    }

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    // delete kar ke dekh lo :
    cout<<"after delete "<<endl;
    h.deletefromheap();
    h.print(); // assume output = 54 52 53 50 :

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    //heapify call ho rha hai :
    for(int i = n/2; i > 0; i--){
        heapify(arr,n,i);
    }

    // array ko print kar do :
    cout<<"printing heapifyid array "<<endl;
    for(int i = 1 ; i <= n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    // heap sort ho rhi hai :
    heapsort(arr,n);
    
    cout<<"after sorting "<<endl;
    for(int i = 1 ; i <= n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    


    return 0;
}