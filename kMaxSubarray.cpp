#include <iostream>
#include <vector>
#include <climits>
using namespace std;

long long helper(vector<int> &arr, int start, int n) {
    long long max1 = INT_MIN, max2 = 0;
    for (int i = start; i < n; i++) {
        max2 = max2 + arr[i];
        if (max1 < max2) {
            max1 = max2;
        }

        if (max2 < 0) {
            max2 = 0;
        }
    }

    return max1;
}

long long kMaxSubarray(int n, int k, vector<int> &arr) {
    if (k > n) {
        k = n;
    }
    long long msum = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (i + k <= n) {
            long long sum = helper(arr, i, i + k);
            msum = max(msum, sum);
        } else {
            break;
        }
    }

    return msum;
}
