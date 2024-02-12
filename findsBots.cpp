#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int distinct(string str) {
    set<char> s;
    for (int i = 0; i < str.size(); i += 2) {
        s.insert(str[i]);
    }
    
    return s.size();
}

int isPrime(int num) {
    if (num == 0 || num == 1) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    
    return 1;
}

vector<int> findBots(vector<string> &u, int n) {
    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        int x = distinct(u[i]);
        ans.push_back(isPrime(x));
    }
    
    return ans;
}

int main() {
    // Sample input
    vector<string> usernames = {"abcde", "fghij", "klmno"};
    int n = usernames.size();

    // Call the findBots function
    vector<int> result = findBots(usernames, n);

    // Display the result
    cout << "Prime status for each username: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
