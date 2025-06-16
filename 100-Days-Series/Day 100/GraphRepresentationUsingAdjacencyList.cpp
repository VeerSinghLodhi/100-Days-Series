#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node(int data) {
        this->data = data;
    }
};

class Graph {
private:
    vector<vector<Node>> adjList;

public:
    Graph(int v) {
        adjList.resize(v);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(Node(v));
        adjList[v].push_back(Node(u));
    }

    void printGraph() {
        for (int v = 0; v < adjList.size(); v++) {
            cout << "\nNeighbors of Node " << (v + 1) << " : "; // Output node numbers starting from 1
            for (auto neighbor : adjList[v]) {
                cout << "->" << (neighbor.data + 1) << " "; // Output node numbers starting from 1
            }
            cout << endl;
        }
    }
};
// Let's Start Here
int main() {
    int v = 5; // Number of vertices in the graph (indexed from 0 to 4)
    Graph graph(v);

    // Add edges based on the uploaded image
    graph.addEdge(0, 1); // Edge between 1 and 2
    graph.addEdge(0, 2); // Edge between 1 and 3
    graph.addEdge(1, 3); // Edge between 2 and 4
    graph.addEdge(2, 3); // Edge between 3 and 4
    graph.addEdge(2, 4); // Edge between 3 and 5
    graph.addEdge(3, 4); // Edge between 4 and 5

    // Print the adjacency list
    graph.printGraph();

    return 0;
}
