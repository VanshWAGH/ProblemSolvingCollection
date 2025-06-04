#include <iostream>
using namespace std;

// Function to toggle all bits after the most significant bit
int toggleBits(int num) {
    int msb = 0, temp = num;
    
    // Find the position of the most significant bit
    while (temp > 0) {
        msb++;
        temp >>= 1;
    }
    
    // Create a mask with all bits set up to the most significant bit
    int mask = (1 << msb) - 1;
    
    // XOR num with mask to toggle bits
    return num ^ mask;
}

int main() {
    int num = 10; // Predefined input
    
    int result = toggleBits(num);
    
    cout << result << endl;
    
    return 0;
}
/*
Problem Statement –

Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

Constrains-

1<=N<=100

Example 1:

Input :

10  -> Integer

Output :

5    -> result- Integer

Explanation:

Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.
*/