/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Approach:
    print by moving right -> bottom -> left -> top
    1st print from left -> right, then top++
    2nd print from top -> bottom, then right--
    3rd print from right -> left, then  bottom--
    4th print from bottom -> top, then left++
*/

#include <iostream>
#include <vector>

using namespace std;

// Function definition
vector<int> spiralMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    // Define a 2D matrix for testing
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Get the spiral order of the matrix
    vector<int> result = spiralMatrix(matrix);

    // Print the result
    cout << "Spiral order of the matrix is:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
