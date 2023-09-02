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
    0: [(1, 4), (7, 8)],
    1: [(0, 4), (2, 8), (7, 11)],
    2: [(1, 8), (3, 7), (5, 4), (8, 2)],
    3: [(2, 7), (4, 9), (5, 14)],
    4: [(3, 9), (5, 10)],
    5: [(2, 4), (3, 14), (4, 10), (6, 2)],
    6: [(5, 2), (7, 1), (8, 6)],
    7: [(0, 8), (1, 11), (6, 1), (8, 7)],
    8: [(2, 2), (6, 6), (7, 7)],
}

minimum_spanning_tree = kruskal(graph)
print("Minimum Spanning Tree:")
for u, v, weight in minimum_spanning_tree:
    print(f"{u} - {v}: {weight}")
