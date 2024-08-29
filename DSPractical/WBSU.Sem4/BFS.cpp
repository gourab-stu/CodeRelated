#include <iostream>

int n, i, j, visited[10], queue[10], front = -1, rear = -1;
int adj[10][10];

void bfs(int v) {
    for (i = 1; i <= n; i++)
        if (adj[v][i] && !visited[i])
            queue[++rear] = i;
    if (front <= rear) {
        visited[queue[front]] = 1;
        bfs(queue[front++]);
    }
}

int main() {
    int v;
    std::cout << "Enter the number of vertices: ";
    std::cin >> n;
    for (i = 1; i <= n; i++) {
        queue[i] = 0;
        visited[i] = 0;
    }
    std::cout << "Enter the adjacency matrix: " << std::endl;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            std::cin >> adj[i][j];
    std::cout << "Enter the starting vertex: ";
    std::cin >> v;
    bfs(v);
    std::cout << "The node which are reachable are: ";
    for (i = 1; i <= n; i++)
        if (visited[i])
            std::cout << i << " ";
        else
            std::cout << "BFS is not possible. Not all nodes are reachable";
    return 0;
}