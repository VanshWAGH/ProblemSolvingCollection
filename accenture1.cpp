#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the minimum number of houses required
int minHousesRequired(int r, int unit, vector<int>& arr) {
    // Function implementation goes here
    if(arr.size() == 0)return -1;
    int ans = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        
        ans += arr[i];
        count++;
        if(ans > r*unit)break;

        
    }
    return count;
}

int main() {
    int r, unit, n;
    cin >> r >> unit >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = minHousesRequired(r, unit, arr);
    cout << result << endl;
    
    return 0;
}
