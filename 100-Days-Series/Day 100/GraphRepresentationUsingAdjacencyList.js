class Node {
    constructor(data) {
        this.data = data;
    }
}

class Graph {
    constructor(vertices) {
        this.adjList = new Array(vertices).fill(null).map(() => []);
    }

    // Method to add an undirected edge between two vertices
    addEdge(u, v) {
        this.adjList[u].push(new Node(v));
        this.adjList[v].push(new Node(u));
    }

    // Method to print the adjacency list
    printGraph() {
        for (let v = 0; v < this.adjList.length; v++) {
            let neighbors = this.adjList[v]
                .map((node) => `->${node.data + 1}`) // Convert node data to 1-based index
                .join(" ");
            console.log(`Neighbors of Node ${v + 1}: ${neighbors}`);
        }
    }
}

// Main function
const main = () => {
    const vertices = 5; // Number of vertices in the graph
    const graph = new Graph(vertices);

    // Add edges
    graph.addEdge(0, 1); // Edge between 1 and 2
    graph.addEdge(0, 2); // Edge between 1 and 3
    graph.addEdge(1, 3); // Edge between 2 and 4
    graph.addEdge(2, 3); // Edge between 3 and 4
    graph.addEdge(2, 4); // Edge between 3 and 5
    graph.addEdge(3, 4); // Edge between 4 and 5

    // Print the adjacency list
    graph.printGraph();
};

// Run the main function
main();
