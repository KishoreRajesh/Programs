#include <stdio.h>
#include <limits.h>

// Number of vertices in the graph
#define V 5

// Function to find the single source shortest path in a weighted directed graph
void bellman_ford(int graph[V][V], int src) {
    int dist[V];

    // Initialize the distance of all vertices from the source vertex to infinity
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
    }

    // Set the distance of the source vertex to 0
    dist[src] = 0;

    // Relax the edges V-1 times
    for (int i = 1; i < V; i++) {
        for (int j = 0; j < V; j++) {
            for (int k = 0; k < V; k++) {
                if (dist[j] > dist[k] + graph[k][j]) {
                    dist[j] = dist[k] + graph[k][j];
                }
            }
        }
    }

    // Check for negative weight cycles
    for (int j = 0; j < V; j++) {
        for (int k = 0; k < V; k++) {
            if (dist[j] > dist[k] + graph[k][j]) {
                printf("Graph contains a negative weight cycle\n");
                return;
            }
        }
    }

    // Print the shortest path distances
    for (int i = 0; i < V; i++) {
        printf("Distance of vertex %d from source %d is %d\n", i, src, dist[i]);
    }
}

int main() {
    // Define the weighted directed graph
    int graph[V][V] = {
        {0, 10, INT_MAX, INT_MAX, 5},
        {INT_MAX, 0, 1, 2, INT_MAX},
        {INT_MAX, INT_MAX, 0, INT_MAX, 2},
        {INT_MAX, INT_MAX, 4, 0, 3},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0}
    };

    // Find the single source shortest path from vertex 0
    bellman_ford(graph, 0);

    return 0;
}