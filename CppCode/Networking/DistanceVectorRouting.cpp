#include <iostream>

struct node {
    unsigned dist[6];
    unsigned from[6];
} DVR[10];

int main() {
    std::cout << "\n\nPROGRAM TO IMPLEMENT DISTANCE VECTOR ROUTING ALGORITHM ";
    int costmat[6][6];
    int nodes, i, j, k;
    std::cout << "\n\nEnter the number of nodes : ";
    std::cin >> nodes; // Enter the nodes
    std::cout << "\nEnter the cost matrix : \n";
    for (i = 0; i < nodes; i++) {
        for (j = 0; j < nodes; j++) {
            std::cin >> costmat[i][j];
            costmat[i][i] = 0;
            DVR[i].dist[j] = costmat[i][j]; // initialise the distance equal to cost matrix
            DVR[i].from[j] = j;
        }
    }
    for (i = 0; i < nodes; i++) 
        // We choose arbitary vertex k and we calculate the
        // direct distance from the node i to k using the cost matrix and add the distance from k to node j
        for (j = i + 1; j < nodes; j++)
            for (k = 0; k < nodes; k++) // We calculate the minimum distance
                if (DVR[i].dist[j] > costmat[i][k] + DVR[k].dist[j]) { 
                    DVR[i].dist[j] = DVR[i].dist[k] + DVR[k].dist[j];
                    DVR[j].dist[i] = DVR[i].dist[j];
                    DVR[i].from[j] = k;
                    DVR[j].from[i] = k;
                }
    for (i = 0; i < nodes; i++) {
        std::cout << "\n\nFor router: " << i + 1;
        for (j = 0; j < nodes; j++)
            std::cout << "\t\nnode " << j + 1 << " via " << DVR[i].from[j] + 1 << " Distance " << DVR[i].dist[j];
    }
    std::cout << " \n\n ";
    return 0;
}
