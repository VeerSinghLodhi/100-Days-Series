#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
typedef struct Graph {
    int numVertices;
    Node** adjList;
} Graph;
// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to create a graph
Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;
    graph->adjList = (Node**)malloc(vertices * sizeof(Node*));

    for (int i = 0; i < vertices; i++) {
        graph->adjList[i] = NULL;
    }

    return graph;
}
// Function to add an edge to the graph
void addEdge(Graph* graph, int u, int v) {
    // Add edge from u to v
    Node* newNode = createNode(v);
    newNode->next = graph->adjList[u];
    graph->adjList[u] = newNode;
    // Add edge from v to u (since the graph is undirected)
    newNode = createNode(u);
    newNode->next = graph->adjList[v];
    graph->adjList[v] = newNode;
}
// Function to print the graph
void printGraph(Graph* graph) {
    for (int v = 0; v < graph->numVertices; v++) {
        printf("\nNeighbors of Node %d: ", v + 1);
        Node* temp = graph->adjList[v];
        while (temp) {
            printf("->%d ", temp->data + 1);
            temp = temp->next;
        }
    }
    printf("\n");
}
// Let's Start Here
void main() {
    int v = 5; // Number of vertices
    Graph* graph = createGraph(v);
    // Add edges
    addEdge(graph, 0, 1); // Edge between 1 and 2
    addEdge(graph, 0, 2); // Edge between 1 and 3
    addEdge(graph, 1, 3); // Edge between 2 and 4
    addEdge(graph, 2, 3); // Edge between 3 and 4
    addEdge(graph, 2, 4); // Edge between 3 and 5
    addEdge(graph, 3, 4); // Edge between 4 and 5
    // Print the adjacency list
    printGraph(graph);
}
