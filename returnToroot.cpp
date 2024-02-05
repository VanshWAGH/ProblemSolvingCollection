#include <iostream>
#include <vector>

using namespace std;

int ReturnToRoot(int N, vector<string> &M) {
    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (M[i] == "../") {
            ans--;
        } else if (M[i] == "./") {
            continue;
        } else {
            ans++;
        }
    }

    return ans;
}

int main() {
    // Example usage
    vector<string> directories = {"dir1/", "./", "dir2/", "../", "dir3/", "../"};

    // Calculate the steps to return to the root
    int steps = ReturnToRoot(directories.size(), directories);

    // Output the result
    cout << "Number of steps to return to the root: " << steps << endl;

    return 0;
}
