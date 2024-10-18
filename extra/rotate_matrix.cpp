#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
   vector<vector<int>>matrix = {{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}}; // initilizing the vector :
   
    int matrix_row = matrix.size();    // row of given vector :
    int matrix_col = matrix[0].size();  // column of the given vector : 
    int ans[matrix_row][matrix_col];    // creating a new array or vector for storing the value of given vector/array :
    
    int ans_col = matrix_col - 1;  // ans ki column so that we can traverse the new array :


    for(int row = 0; row < matrix_row && ans_col >= 0; row++){
        for(int col = 0; col < matrix_col; col++){
            ans[col][ans_col] = matrix[row][col];                   // given values ============ dry run krke dekh le smj aa jayga : 
        }
        ans_col--;
    }
    

    // printing the ans vector : 
    for(int i = 0 ; i < matrix_row; i++){
        for(int j = 0; j < matrix_col; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}