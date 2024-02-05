/*
An ant is on a boundary. It sometimes goes left and sometimes right.

You are given an array of non-zero integers nums. The ant starts reading nums from the first element of it to its end. At each step, it moves according to the value of the current element:

If nums[i] < 0, it moves left by -nums[i] units.
If nums[i] > 0, it moves right by nums[i] units.
Return the number of times the ant returns to the boundary.

Notes:

There is an infinite space on both sides of the boundary.
We check whether the ant is on the boundary only after it has moved |nums[i]| units. In other words, if the ant crosses the boundary during its movement, it does not count.
*/

#include <iostream>
#include <vector>

using namespace std;

int returnToBoundaryCount(vector<int>& nums) {
    int ans = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        count += nums[i];
        
        if (count == 0) {
            ans++;
        }
    }

    return ans;
}

int main() {
    // Example usage
    vector<int> nums = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};

    // Calculate the result using returnToBoundaryCount
    int result = returnToBoundaryCount(nums);

    // Output the result
    cout << "Number of times cumulative sum becomes zero: " << result << endl;

    return 0;
}
