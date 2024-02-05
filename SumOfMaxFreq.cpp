#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map<int, int> freq;
    vector<int> nums = {1, 2, 3, 2, 4, 3, 5, 3, 3};

    for (int ele : nums) {
        freq[ele]++;
    }

    int maxfreq = 0;

    for (auto ele : freq) {
        if (ele.second > maxfreq) {
            maxfreq = ele.second;
        }
    }

    int ans = 0;

    for (auto ele : freq) {
        if (ele.second == maxfreq) {
            ans += ele.second;
        }
    }

    cout << "The answer is: " << ans << endl;

    return 0;
}
