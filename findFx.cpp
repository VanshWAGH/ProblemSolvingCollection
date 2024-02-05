#include <iostream>
#include <vector>

using namespace std;

int mod = 1000000007;
vector<long long> arr;

long long fun(int n) {
    if (n == 0) return 2;
    if (n == 1) return 5;
    if (n == 2) return 9;
    if (n == 3) return 7;

    if (arr[n] != -1) return arr[n];

    if (n % 2 == 0 && n >= 4) {
        arr[n] = ((fun(n - 2) * (n - 2)) + (fun(n - 4) * (n - 4))) % mod;
    } else if (n % 2 != 0 && n >= 4) {
        arr[n] = ((fun(n - 1) * (n - 1)) + (fun(n - 3) * (n - 3))) % mod;
    }

    return arr[n];
}

int findFun(int n) {
    arr.assign(100005, -1);
    return fun(n) % mod;
}

int main() {
    // Example usage
    int n = 5;
    
    // Calculate the result using findFun
    int result = findFun(n);

    // Output the result
    cout << "Result for n=" << n << ": " << result << endl;

    return 0;
}
