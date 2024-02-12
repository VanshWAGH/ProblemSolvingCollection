/*
Given a 0-indexed m x n integer matrix matrix, create a new 0-indexed matrix called answer. Make answer equal to matrix, then replace each element with the value -1 with the maximum element in its respective column.

Return the matrix answer.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
    vector<vector<int>> ans = matrix;
    int rows = matrix.size();    // rows
    int cols = matrix[0].size(); // columns

    for (int col = 0; col < cols; col++) {
        vector<int> helper;
        for (int row = 0; row < rows; row++) {
            helper.push_back(ans[row][col]);
        }
        sort(helper.begin(), helper.end());

        for (int row = 0; row < rows; row++) {
            if (ans[row][col] == -1) {
                ans[row][col] = helper.back();
                helper.pop_back();
            }
        }
    }

    return ans;
}

int main() {
    // Sample input
    vector<vector<int>> matrix = {
        {1, 3, 2},
        {4, -1, 6},
        {-1, 9, 7}
    };

    // Call the modifiedMatrix function
    vector<vector<int>> result = modifiedMatrix(matrix);

    // Display the result
    cout << "Modified Matrix:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
