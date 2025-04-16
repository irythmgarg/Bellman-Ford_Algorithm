#include <vector>
using namespace std;

/**
 * Function to implement the Bellman-Ford algorithm to find the shortest paths
 * from a single source vertex to all other vertices in a weighted graph.
 *
 * @param V     Number of vertices in the graph
 * @param edges List of edges represented as {from, to, weight}
 * @param src   Source vertex from which to calculate shortest paths
 * @return      Vector of shortest distances from source to all vertices.
 *              If a negative weight cycle is detected, returns {-1}.
 */
vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    // Initialize distance array with a large value (infinity substitute)
    vector<int> ans(V, 100000000);
    ans[src] = 0; // Distance from source to itself is always 0

    // Relax all edges V-1 times
    for (int j = 0; j < V - 1; j++) {
        for (int i = 0; i < edges.size(); i++) {
            int from = edges[i][0];
            int to = edges[i][1];
            int cost = edges[i][2];

            // Skip if the starting node is unreachable
            if (ans[from] == 100000000)
                continue;

            // Update distance if a shorter path is found
            if (ans[to] > ans[from] + cost) {
                ans[to] = ans[from] + cost;
            }
        }
    }

    // Check for negative weight cycles
    for (int i = 0; i < edges.size(); i++) {
        int from = edges[i][0];
        int to = edges[i][1];
        int cost = edges[i][2];

        if (ans[from] == 100000000)
            continue;

        // If we can still relax an edge, there is a negative weight cycle
        if (ans[to] > ans[from] + cost) {
            return {-1};
        }
    }

    return ans; // Return the shortest path distances
}
