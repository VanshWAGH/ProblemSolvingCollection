#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minimumChairs(string s) {
    int maxChairs = 0;  // To keep track of the maximum number of chairs needed
    int currentChairs = 0;  // To keep track of the current number of occupied chairs

    for (char c : s) {
        if (c == 'E') {
            currentChairs++;
        } else if (c == 'L') {
            currentChairs--;
        }
        maxChairs = max(maxChairs, currentChairs);
    }
    
    return maxChairs;
}

int main() {
    // Test case 1
    string s1 = "EEEEEEE";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << minimumChairs(s1) << endl;

    // Test case 2
    string s2 = "ELELEEL";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << minimumChairs(s2) << endl;

    // Additional test case
    string s3 = "EELLEE";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << minimumChairs(s3) << endl;

    return 0;
}
