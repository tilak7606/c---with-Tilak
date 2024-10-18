
#include <iostream>
#include<vector>

using namespace std;

int main()
 {
//     int row,column;
//     int val;
//     vector<vector<int>>arr;
//     cout<<"Enter the row and column of the vector : ";
//     cin>>row >> column;
//     cout<<"Enter the elements of the vector : ";
//     for(int i = 0; i <row; i++ ){
//         for(int j = 0; j < column; j++)
//         cin>>val;
//         arr.push_back(val);
//     }


int x;
vector<int>v;
cout<<"Enter ";
vector<int>v1;
for(int i =0 ; i < 5; i++){
    for(int j =0; i < 3; j++){
        cin>>x;
    v1.push_back(x);

    }
    v.push_back(v1);
    
}
for(int i : v)
cout<<i;
    

    return 0;
}