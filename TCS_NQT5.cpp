#include <iostream>
#include <vector>

using namespace std;

void moveZerosToFront(vector<int>& arr) {
    int n = arr.size();
    int writer = n - 1; // Writer starts at the last index

    // Traverse from right to left
    for (int reader = n - 1; reader >= 0; reader--) {
        if (arr[reader] != 0) {//if it is not zero then swap it...
            swap(arr[reader], arr[writer]);
            writer--; // Move writer left
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 4, 0, 5};
    
    moveZerosToFront(arr);
    
    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
