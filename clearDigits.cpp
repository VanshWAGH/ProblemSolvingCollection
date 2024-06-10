#include <iostream>
#include <string>

using namespace std;

string clearDigits(string s) {
    string result;
    
    for (char c : s) {
        if (isdigit(c)) {
            if (!result.empty()) {
                result.pop_back();
            }
        } else {
            result += c;
        }
    }
    
    return result;
}

int main() {
    // Test case 1
    string s1 = "abc";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << clearDigits(s1) << endl;
    
    // Test case 2
    string s2 = "cb34";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << clearDigits(s2) << endl;

    // Additional test case
    string s3 = "a1b2c3";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << clearDigits(s3) << endl;

    return 0;
}
