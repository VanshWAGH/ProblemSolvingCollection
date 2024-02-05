#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumCost(vector<int>& nums) {
    vector<int> temp;
    int min_sum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        temp.push_back(nums[i]);
    }

    sort(temp.begin(), temp.end());

    min_sum += temp[0] + temp[1];

    return min_sum;
}

int main() {
    vector<int> testNumbers = {5, 8, 2, 10, 3};

    int result = minimumCost(testNumbers);

    cout << "Minimum cost: " << result << endl;

    return 0;
}
