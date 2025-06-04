#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int Function_second(vector<int> &arr) {
    if (arr.size() < 2) return -1;  // Check if array has at least 2 elements

    int sec = INT_FAST16_MIN, lar = INT_FAST16_MIN;

    for (int num : arr) {
        if (num > lar) {
            sec = lar;
            lar = num;
        } else if (num > sec && num != lar) {
            sec = num;
        }
    }

    if (sec == INT_FAST16_MIN) return -1;  // Fix incorrect condition

    return sec;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << Function_second(arr) << endl;  // No need to pass 'n' explicitly
    return 0;
}
