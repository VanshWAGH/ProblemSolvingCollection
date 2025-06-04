#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word, result;
    stringstream ss(s);
    
    // Split string by spaces
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse order of words
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if (i > 0) result += " "; // Add space between words
    }
    
    return result;
}

// Driver code
int main() {
    string s = "Hello World from ChatGPT";
    cout << "Reversed Sentence: " << reverseWords(s) << endl;
    return 0;
}
