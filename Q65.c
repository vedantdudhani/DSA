#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];   // adjacency matrix
int visited[MAX];
int n; // number of vertices

// DFS function
int dfs(int node, int parent) {
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i]) {  // if edge exists

            if (!visited[i]) {
                if (dfs(i, node))
                    return 1;
            }
            else if (i != parent) {
                return 1; // cycle found
            }
        }
    }
    return 0;
}

int hasCycle() {
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (dfs(i, -1))
                return 1;
        }
    }
    return 0;
}

int main() {
    int e;
    scanf("%d %d", &n, &e);

    // initialize
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // input edges
    for (int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1; // undirected graph
    }

    if (hasCycle())
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}