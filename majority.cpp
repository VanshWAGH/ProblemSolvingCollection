#include <iostream>

int majorityWins(int arr[], int n, int x, int y) {
    int freqx = 0;
    int freqy = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) freqx++;
        if(arr[i] == y) freqy++;
    }

    if(freqx == freqy) {
        return std::min(x, y);
    }

    if(freqx > freqy) return x;
    return y;
}

int main() {
    using namespace std;

    // Sample input
    int arr[] = {2, 3, 4, 2, 2, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int y = 5;

    // Call the majorityWins function
    int result = majorityWins(arr, n, x, y);

    // Display the result
    cout << "The majority element is: " << result << endl;

    return 0;
}
