class Node:
    def __init__(self, data):
        self.data = data


class Graph:
    def __init__(self, vertices):
        # Initialize adjacency list with empty lists for each vertex
        self.adj_list = [[] for _ in range(vertices)]

    def add_edge(self, u, v):
        # Add edge from u to v (undirected graph)
        self.adj_list[u].append(Node(v))
        self.adj_list[v].append(Node(u))

    def print_graph(self):
        for v in range(len(self.adj_list)):
            neighbors = " -> ".join(str(neighbor.data + 1) for neighbor in self.adj_list[v])
            print(f"Neighbors of Node {v + 1}: {neighbors}")



vertices = 5  # Number of vertices
graph = Graph(vertices)

# Add edges
graph.add_edge(0, 1)  # Edge between 1 and 2
graph.add_edge(0, 2)  # Edge between 1 and 3
graph.add_edge(1, 3)  # Edge between 2 and 4
graph.add_edge(2, 3)  # Edge between 3 and 4
graph.add_edge(2, 4)  # Edge between 3 and 5
graph.add_edge(3, 4)  # Edge between 4 and 5
# Print adjacency list
graph.print_graph()


