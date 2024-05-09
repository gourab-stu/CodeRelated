#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total no of vertices: ";
    cin >> n;
    int adjMat[n][n];
    cout << "Enter the adjacency matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> adjMat[i][j];
        }
    }
    cout << "Displaying the adjacency matrix" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << adjMat[i][j] << "\t";
        }
        cout << endl;
    }
    int edges = 0, selfLoop = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i != j) && (adjMat[i][j] == 1))
                edges++;
            if((adjMat[i][j] == 1) && (i == j))
                selfLoop++;
        }
    }
    edges /= 2;
    cout << "edges = " << edges << ", selfLoop = " << selfLoop << endl;
    // in incidence matrix
    // rows ->  vertex 
    // columns -> edges
    int inciMat[n][edges];
    cout << "Enter the incidence matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < edges; j++) {
            cin >> inciMat[i][j];
        }
    }
}