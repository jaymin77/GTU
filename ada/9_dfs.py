def dfs(graph, node, visited):
    if node not in visited:
        print(node, end=' ')
        visited.append(node)
        for i in graph[node]:
            dfs(graph, i, visited)


# graph = {0:[1,3], 1:[2,3,5,6], 2:[1,3,4,5], 3:[1,2,4], 4:[2,3,6], 5:[1,2], 6:[1,4]}
graph = {0:[1,3], 1:[3,5,6], 2:[4,5], 3:[1,4], 4:[2,3,6], 5:[1,2], 6:[1,4]}
visited_nodes = []
dfs(graph, 0, visited_nodes)