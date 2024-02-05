#include <iostream>
#include <vector>
#include <set>

using namespace std;

int candyShop(int n, vector<int> &candies) {
    int cost = 0;

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(candies[i]);
    }

    for (auto ele : s) {
        cost += ele;
    }

    return cost;
}

int main() {
    int n = 5;
    vector<int> candies = {1, 2, 2, 3, 3};

    int totalCost = candyShop(n, candies);

    cout << "Total cost of candies: " << totalCost << endl;

    return 0;
}
