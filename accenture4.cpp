#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int CheckPassword(char str[], int n) {
    if (n < 4) return 0; // Must be at least 4 characters
    if (isdigit(str[0])) return 0; // Starting character must not be a number

    int total_chars = 0, num = 0, cap = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '/' || str[i] == ' ') return 0; // No spaces or slashes
        if (isupper(str[i])) cap++; // Count capital letters
        if (isdigit(str[i])) num++; // Count numbers
        if (isalnum(str[i]) || str[i] == '_') total_chars++; // Count letters, digits, and underscore
    }

    // Check all conditions before returning 1
    if (total_chars >= 4 && cap >= 1 && num >= 1) 
        return 1;
    
    return 0;
}

int main() {
    char str1[] = "aA1_67";       // Valid password
    char str2[] = "a987 abC012";  // Invalid due to space

    cout << CheckPassword(str1, strlen(str1)) << endl; // Expected output: 1
    cout << CheckPassword(str2, strlen(str2)) << endl; // Expected output: 0

    return 0;
}
