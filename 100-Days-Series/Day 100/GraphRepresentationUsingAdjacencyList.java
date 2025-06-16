import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

class Node {
    int data;

    Node(int data) {
        this.data = data;
    }
}

class Graph {
    private List<List<Node>> adjList;

    // Constructor to initialize the graph with `v` vertices
    Graph(int v) {
        adjList = new ArrayList<>();
        for (int i = 0; i < v; i++) {
            adjList.add(new LinkedList<>());
        }
    }

    // Method to add an undirected edge between two vertices
    void addEdge(int u, int v) {
        adjList.get(u).add(new Node(v));
        adjList.get(v).add(new Node(u));
    }

    // Method to print the adjacency list of the graph
    void printGraph() {
        for (int v = 0; v < adjList.size(); v++) {
            System.out.print("\nNeighbors of Node " + (v + 1) + ": ");
            for (Node neighbor : adjList.get(v)) {
                System.out.print("->" + (neighbor.data + 1) + " ");
            }
        }
        System.out.println();
    }
}

public class GraphRepresentationUsingAdjacencyList {
    public static void main(String[] args) {
        int v = 5; // Number of vertices in the graph
        Graph graph = new Graph(v);

        // Add edges
        graph.addEdge(0, 1); // Edge between 1 and 2
        graph.addEdge(0, 2); // Edge between 1 and 3
        graph.addEdge(1, 3); // Edge between 2 and 4
        graph.addEdge(2, 3); // Edge between 3 and 4
        graph.addEdge(2, 4); // Edge between 3 and 5
        graph.addEdge(3, 4); // Edge between 4 and 5

        // Print the adjacency list
        graph.printGraph();
    }
}
