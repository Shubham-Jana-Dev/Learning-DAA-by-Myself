#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
 
// Function to find vertex with minimum key value not yet in MST
int minKey(int key[], bool mstSet[], int V) {
   int min = INT_MAX, min_index;
   for (int v = 0; v < V; v++)
       if (!mstSet[v] && key[v] < min)
           min = key[v], min_index = v;
   return min_index;
}
 
// Function to print the MST
void printMST(int parent[], int graph[][50], int V) {
   printf("Edge \tWeight\n");
   for (int i = 1; i < V; i++)
       printf("%d - %d \t%d\n", parent[i], i, graph[parent[i]][i]);
}
 
// Function to construct MST using Prim's Algorithm
void primMST(int graph[][50], int V) {
   int parent[V];      // To store MST
   int key[V];         // Key values to pick minimum edge
   bool mstSet[V];     // To track vertices in MST
 
   for (int i = 0; i < V; i++)
       key[i] = INT_MAX, mstSet[i] = false;
 
   key[0] = 0;         // Start from first vertex
   parent[0] = -1;
 
   for (int count = 0; count < V - 1; count++) {
       int u = minKey(key, mstSet, V);  // Pick min key vertex
       mstSet[u] = true;
 
       for (int v = 0; v < V; v++)
           if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
               parent[v] = u, key[v] = graph[u][v];
   }
 
   printMST(parent, graph, V);
}
 
int main() {
   int V;
   printf("Enter number of vertices: ");
   scanf("%d", &V);
 
   int graph[50][50];
 
   printf("Enter adjacency matrix (0 if no edge) row-wise:\n");
   for (int i = 0; i < V; i++)
       for (int j = 0; j < V; j++)
           scanf("%d", &graph[i][j]);
 
   primMST(graph, V);
 
   return 0;
}