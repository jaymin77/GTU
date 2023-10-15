def kruskal(graph):
    def get_parent(parents, vertex):
        while parents[vertex] != vertex:
            vertex = parents[vertex]
        return vertex

    def merge(parents, u, v):
        parent_u = get_parent(parents, u)
        parent_v = get_parent(parents, v)
        if parent_u != parent_v:
            parents[parent_u] = parent_v

    edges = []
    for u in graph:
        for v, weight in graph[u]:
            edges.append((u, v, weight))

    edges.sort(key=lambda x: x[2])
    parents = {vertex: vertex for vertex in graph}
    minimum_spanning_tree = []

    for u, v, weight in edges:
        if get_parent(parents, u) != get_parent(parents, v):
            merge(parents, u, v)
            minimum_spanning_tree.append((u, v, weight))

    return minimum_spanning_tree

# Example graph represented as an adjacency list
graph = {
    0: [(1, 1), (2, 3)],
    1: [(0, 2), (2, 2)],
    2: [(1, 4), (0, 3)]
}

cost = 0
minimum_spanning_tree = kruskal(graph)
print("edges:")
for u, v, weight in minimum_spanning_tree:
    print(f"{(u ,v)}: {weight}")
    cost += weight 
print("Total cost:",cost)