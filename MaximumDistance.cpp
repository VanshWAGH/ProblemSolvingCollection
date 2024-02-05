#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int solve(int N, int a, std::vector<int> x) {
    int ans1 = INT_MIN, ans2 = INT_MIN;

    if (N == 1) return x[0];
    if (N == 0) return -1;

    int i, j;
    int maxIndex;

    for (i = 0; i < N; i++) {
        if (ans1 < std::abs(x[i] - a)) {
            ans1 = std::abs(x[i] - a);
            maxIndex = i;
        }
    }

    for (j = 0; j < N; j++) {
        if (j != maxIndex)
            ans2 = std::max(ans2, std::abs(a - x[j]));
    }

    return ans1 + ans2;
}

int main() {
    int N = 5;
    int a = 10;
    std::vector<int> x = {5, 12, 8, 3, 17};

    int result = solve(N, a, x);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
