#include <stdio.h>

int main() {
    int adj[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int stack[100], top = -1;
    int visited[5] = {0};
    int start = 0;

    // Push start node
    stack[++top] = start;

    printf("DFS Traversal: ");

    while (top != -1) {
        int node = stack[top--];  // Pop

        if (!visited[node]) {
            printf("%d ", node);
            visited[node] = 1;

            // Push neighbors in reverse to match recursion order
            for (int i = 4; i >= 0; i--) {
                if (adj[node][i] == 1 && visited[i] == 0) {
                    stack[++top] = i;
                }
            }
        }
    }

    printf("\n");
    return 0;
}

