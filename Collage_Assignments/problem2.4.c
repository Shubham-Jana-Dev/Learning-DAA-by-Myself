// 4.Minimum Cost Spanning Tree by Kruskal’s Algorithm.
// Ans:
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int u, v, w;
} Edge;

// Find parent of a vertex with path compression
int find(int parent[], int i) {
    if(parent[i] != i)
        parent[i] = find(parent, parent[i]);
    return parent[i];
}

// Union of two sets by rank
void unite(int parent[], int rank[], int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);
    if(rank[xroot] < rank[yroot])
        parent[xroot] = yroot;
    else if(rank[xroot] > rank[yroot])
        parent[yroot] = xroot;
    else {
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

// Compare function for qsort (sort edges by weight)
int compare(const void *a, const void *b) {
    Edge *e1 = (Edge *)a;
    Edge *e2 = (Edge *)b;
    return e1->w - e2->w;
}

int main() {
    int V, E;
    printf("Enter number of vertices: ");
    scanf("%d", &V);
    printf("Enter number of edges: ");
    scanf("%d", &E);

    Edge edges[E];
    int parent[V], rank[V];

    printf("Enter each edge as: u v w\n");
    for(int i = 0; i < E; i++)
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);

    // Initialize disjoint set
    for(int i = 0; i < V; i++)
        parent[i] = i, rank[i] = 0;

    // Sort edges by weight
    qsort(edges, E, sizeof(Edge), compare);

    int cost = 0, count = 0;
    for(int i = 0; i < E && count < V - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if(find(parent, u) != find(parent, v)) {
            unite(parent, rank, u, v);
            cost += w;
            count++;
        }
    }

    printf("Minimum cost of MST: %d\n", cost);

    return 0;
}
