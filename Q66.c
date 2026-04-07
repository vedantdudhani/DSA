#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int* adj[MAX];
int adjSize[MAX];
int visited[MAX];
int recStack[MAX];

// DFS function
int dfs(int node) {
    visited[node] = 1;
    recStack[node] = 1;

    for (int i = 0; i < adjSize[node]; i++) {
        int neighbor = adj[node][i];

        if (!visited[neighbor]) {
            if (dfs(neighbor))
                return 1;
        }
        else if (recStack[neighbor]) {
            return 1; // cycle found
        }
    }

    recStack[node] = 0; // remove from recursion stack
    return 0;
}

// Check cycle
int isCycle(int V) {
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i))
                return 1;
        }
    }
    return 0;
}

int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    // initialize
    for (int i = 0; i < V; i++) {
        adj[i] = (int*)malloc(V * sizeof(int));
        adjSize[i] = 0;
        visited[i] = 0;
        recStack[i] = 0;
    }

    // input directed edges
    for (int i = 0; i < E; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        adj[u][adjSize[u]++] = v; // directed edge
    }

    if (isCycle(V))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}