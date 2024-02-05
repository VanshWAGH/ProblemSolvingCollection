#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& dim) {
    if (dim.size() == 1) {
        int l = dim[0][0];
        int w = dim[0][1];
        return l * w;
    }
    if (dim.size() == 0) return -1;

    float maxDiag = INT_MIN;
    int maxArea = INT_MIN;

    for (int i = 0; i < dim.size(); i++) {
        int l = dim[i][0];
        int w = dim[i][1];
        float diag = sqrt(l * l + w * w);
        int area = l * w;

        if (maxDiag < diag) {
            maxDiag = diag;
            maxArea = area;
        } else if (maxDiag == diag) {
            maxArea = max(area, maxArea);
        }
    }

    return maxArea;
}

int main() {
    vector<vector<int>> dimensions = {{3, 4}, {1, 6}, {5, 2}, {7, 8}};

    int result = areaOfMaxDiagonal(dimensions);

    cout << "Maximum area based on diagonal length: " << result << endl;

    return 0;
}
