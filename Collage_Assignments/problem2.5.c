// 5.Minimum Cost Spanning Tree by Dijkstra’s Algorithm.
// Ans:
#include <stdio.h>
#define INFINITY 9999  // Infinity value for unreachable paths

// Function to find the vertex with minimum distance not yet visited
int minDistance(int distance[], int visited[], int n) {
    int min = INFINITY, min_index;

    for(int i = 0; i < n; i++)
        if(!visited[i] && distance[i] < min) // Pick the smallest distance among unvisited vertices
            min = distance[i], min_index = i;

    return min_index; // Return the vertex index
}

// Dijkstra algorithm function
void Dijkstra(int n, int Graph[50][50], int start) {
    int distance[50]; // Stores shortest distance from start to each vertex
    int visited[50];  // Tracks vertices already processed
    int i, j;

    // Initialize distances and visited array
    for(i = 0; i < n; i++) {
        distance[i] = Graph[start][i] ? Graph[start][i] : INFINITY; // Direct edge weight or infinity
        visited[i] = 0; // None are visited initially
    }

    distance[start] = 0; // Distance from start to itself is 0
    visited[start] = 1;  // Mark start as visited

    // Loop through all vertices to find shortest path
    for(int count = 1; count < n; count++) {
        int next = minDistance(distance, visited, n); // Pick unvisited vertex with smallest distance
        visited[next] = 1; // Mark it as visited

        // Update distances of adjacent vertices
        for(i = 0; i < n; i++)
            if(!visited[i] && Graph[next][i] && distance[next] + Graph[next][i] < distance[i])
                distance[i] = distance[next] + Graph[next][i]; // Relaxation step
    }
// Print the shortest distances from start
    for(i = 0; i < n; i++)
        if(i != start)
            printf("Distance from %d to %d: %d\n", start, i, distance[i]);
}

int main() {
    int n, i, j, start;
    int Graph[50][50];

    // Input number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Input adjacency matrix
    printf("Enter adjacency matrix (0 if no edge):\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &Graph[i][j]);

    // Input starting vertex
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // Call Dijkstra function
    Dijkstra(n, Graph, start);

    return 0;
}
