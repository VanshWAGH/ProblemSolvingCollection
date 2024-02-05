/*
You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.

A triangle is called equilateral if it has all sides of equal length.
A triangle is called isosceles if it has exactly two sides of equal length.
A triangle is called scalene if all its sides are of different lengths.
Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string triangleType(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    if (a >= (b + c) || b >= (a + c) || c >= (a + b)) return "none";
    int i = 0, j = nums.size() - 1;

    if (nums[i] == nums[j]) return "equilateral";

    if (nums[i] == nums[i + 1] || nums[i + 1] == nums[j]) return "isosceles";

    return "scalene";
}

int main() {
    
    vector<int> sides = {3, 4, 5}; 

    
    string result = triangleType(sides);

    
    cout << "Type of triangle: " << result << endl;

    return 0;
}
