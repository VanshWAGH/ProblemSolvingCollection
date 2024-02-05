#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int minimizeArrayScore(int n, std::vector<int> &arr) {
    vector<int> arrCopy;
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;

    while (i < j) {
        arrCopy.push_back(arr[i] + arr[j]);
        i++;
        j--;
    }

    return *std::max_element(arrCopy.begin(), arrCopy.end());
}
