#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = matrix.size();
    int col = matrix[0].size();
    int key;
    cout << "Enter the element " << endl;
    cin >> key;

    int start = 0;
    int count = 0;
    int last = row * col - 1;
    int mid = start + (last - start) / 2;
    while (start < last)
    {
        int element = matrix[mid / col][mid % col];
        if (key == element)
        {
            cout << "Found" << endl;
            count++;
            break;
        }
        else if (key > element)
            start = mid + 1;
        else
            last = mid - 1;
        mid = start + (last - start) / 2;
    }

    if (count == 0)
        cout << "Not Found " << endl;

    return 0;
}