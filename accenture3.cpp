#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the count of elements with absolute difference <= diff
int findCount(int arr[], int length, int num, int diff) {
    // User will implement this function
    int ans=0;
    for(int i =0; i < length; i++){
        if(abs(arr[i] - num) <= diff){
            ans++;
        }
        //cout<<arr[i]<<" ";
    }
    
    return ans;
}



int main() {
    int arr[] = {12, 3, 14, 56, 77, 13}; // Predefined input
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 13, diff = 2;
    int expected = 3; // Expected output
    
    int result = findCount(arr, length, num, diff);
    
    cout<<result;
    
    return 0;
}
