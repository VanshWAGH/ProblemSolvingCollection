#include <iostream>
#include <vector>

using namespace std;

int findSmallestCommon(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            return arr1[i];  // Found the smallest common number
        }

        // Move the pointer with the smallest value
        if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k]) i++;
        else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k]) j++;
        else k++;
    }

    return -1;  // No common number found
}

int main() {
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    int result = findSmallestCommon(arr1, arr2, arr3);
    if (result != -1)
        cout << "Smallest common number: " << result << endl;
    else
        cout << "No common number found." << endl;

    return 0;
}
