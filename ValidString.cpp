#include <iostream>
#include <vector>

using namespace std;

// VowelCount function definition
int VowelCount(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
            count++;
        }
    }
    return count;
}

// validStrings function definition
int validStrings(int n, int k, vector<string> &arr) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (VowelCount(arr[i]) == k) {
            ans++;
        }
    }
    return ans;
}

int main() {
    // Example usage
    int n, k;
    cout << "Enter the number of strings: ";
    cin >> n;

    cout << "Enter the target number of vowels (k): ";
    cin >> k;

    vector<string> arr(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the validStrings function
    int result = validStrings(n, k, arr);

    // Output the result
    cout << "Number of strings with " << k << " vowels: " << result << endl;

    return 0;
}
