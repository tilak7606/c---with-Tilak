#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
     // Initializing a vector of vectors of integers
    vector<vector<int>> matrix;

    // Adding elements to the matrix
    matrix.push_back({1, 2, 3}); // Adding a row {1, 2, 3}
    matrix.push_back({4, 5, 6}); // Adding another row {4, 5, 6}
    matrix.push_back({7, 8, 9}); // Adding another row {7, 8, 9}


    int row = matrix.size();
    int col = matrix[0].size();

     
    int starting_row = 0;
    int starting_col = 0;
    int total = row * col;
    int ending_row = row - 1;
    int ending_col = col - 1;
int count = 0;

vector<int>ans;

while(count < total){
    //printing first row : 
    for(int index = starting_col; index <= ending_col; index++){
        ans.push_back(matrix[starting_row][index]);
        count++;
    }
    starting_row++;
    
    // Now Printing the last column  :
    for(int index = starting_row; index <= ending_row; index++){
        ans.push_back(matrix[index][ending_col]);
        count++;
    }
    ending_col--;

    // Printing the last row :
    for(int index = ending_col; index >= starting_col; index--){
        ans.push_back(matrix[ending_row][index]);
        count++;
    }
    ending_row--;


    // Now printing the first column :
    for(int index = ending_row; index >= starting_row; index--){
        ans.push_back(matrix[index][starting_col]);
        count++;

    }
    starting_col++;
}
 
 for(int i : ans){
    cout<<i<<" ";
 }

    return 0;
}