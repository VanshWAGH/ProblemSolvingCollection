#include <iostream>
#include <vector>

using namespace std;

string isMatchFound(int n, int x, int y, vector<int> &arr) {
    bool flag = false;
    
    for(int i = 0; i < n; i++){
        if(x + arr[i] == y){
            flag = true;
            break;
        }
    }
    
    if(flag) return "yes";
    return "no";
}

int main() {
    int n = 5;
    int x = 3;
    int y = 8;
    vector<int> arr = {1, 2, 5, 6, 3};
    
    cout << "Is there a match in the array? " << isMatchFound(n, x, y, arr) << endl;
    
    return 0;
}
