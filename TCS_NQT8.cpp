#include <iostream>
using namespace std;

// Function to count palindromes centered at (left, right)
int countPalindromes(string &s, int left, int right) {
    int count = 0;
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        count++; // Found a palindrome
        left--;  // Expand left
        right++; // Expand right
    }
    return count;
}

// Function to count total palindromic substrings
int countPalindromicSubstrings(string s) {
    int totalCount = 0;
    
    for (int i = 0; i < s.size(); i++) {
        // Odd-length palindromes (single character center)
        totalCount += countPalindromes(s, i, i);
        
        // Even-length palindromes (two-character center)
        totalCount += countPalindromes(s, i, i + 1);
    }
    
    return totalCount;
}

// Driver code
int main() {
    string s = "ababa";
    cout << "Total palindromic substrings: " << countPalindromicSubstrings(s) << endl;
    return 0;
}
