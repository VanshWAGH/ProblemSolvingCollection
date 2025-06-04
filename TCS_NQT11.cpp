#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    int V;  
    vector<vector<int>> adj;  

    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Function to check if the graph is a tree
    bool isTree() {
        vector<bool> visited(V, false);
        queue<pair<int, int>> q;
        int edgeCount = 0;

        q.push({0, -1});
        visited[0] = true;

        int nodeCount = 0;

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            nodeCount++;

            for (int neighbor : adj[node]) {
                edgeCount++;  // Count every edge
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, node});
                } 
                else if (neighbor != parent) {  
                    return false;  // Found a cycle
                }
            }
        }

        // Check if all nodes were visited (graph is connected)
        if (nodeCount != V) return false;

        // Check if the number of edges is exactly V-1
        return (edgeCount / 2 == V - 1);
    }
};

// Driver code
int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    if (g.isTree())
        cout << "The given graph is a tree." << endl;
    else
        cout << "The given graph is NOT a tree." << endl;

    return 0;
}
