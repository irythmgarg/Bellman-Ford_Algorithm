# Bellman-Ford_Algorithm

# 🚀 Bellman-Ford Algorithm Implementation in C++

This repository contains a clean and commented C++ implementation of the **Bellman-Ford Algorithm** used to find the shortest path from a single source vertex to all other vertices in a weighted graph. This algorithm also detects **negative weight cycles**.

---

## 🧠 Algorithm Overview

The Bellman-Ford algorithm works by **relaxing all edges** repeatedly and is capable of handling graphs with **negative weights**. It differs from Dijkstra's algorithm by its ability to detect **negative weight cycles**, which makes it particularly useful in scenarios where such cycles might exist.

---

## 📂 Input

- `V`: Number of vertices
- `edges`: A list of edges where each edge is represented as a vector of three integers `{from, to, weight}`
- `src`: The source vertex

---

## 📤 Output

- A vector containing the shortest distance from the source to all other vertices.
- If a negative weight cycle exists, returns `{-1}`.

---

## 🛠️ Example Usage

int V = 5;
vector<vector<int>> edges = {
    {0, 1, -1}, {0, 2, 4}, {1, 2, 3},
    {1, 3, 2}, {1, 4, 2}, {3, 2, 5},
    {3, 1, 1}, {4, 3, -3}
};
int src = 0;
vector<int> result = bellmanFord(V, edges, src);

// Output: Shortest distances from src
for (int dist : result) {
    cout << dist << " ";
}

⚠️ Features
Handles graphs with negative weights
Detects negative weight cycles
Uses 100000000 as a substitute for infinity
Time Complexity: O(V * E)


🧑‍💻 Author
Your Name – @irythmgarg [Ridham Garg]
