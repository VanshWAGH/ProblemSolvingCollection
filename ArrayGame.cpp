#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &v, int n) {
    int temp = v[0];

    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }

    v[n - 1] = temp;

    return;
}

int min_operations(int n, vector<int> &arr, vector<int> &brr) {
    int method = 0;

    while (arr.size()) {
        if (arr[0] == brr[0]) {
            arr.erase(arr.begin());
            brr.erase(brr.begin());
            method++;
        } else {
            rotate(arr, arr.size());
            method++;
        }
    }

    return method;
}

int main() {
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> brr = {4, 5, 1, 2, 3};

    int operations = min_operations(n, arr, brr);

    cout << "Minimum operations needed: " << operations << endl;

    return 0;
}
