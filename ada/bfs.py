import collections
def bfs(graph, root):
    visited = []
    queue = collections.deque([root])

    while queue:
        vertex = queue.popleft()
        if vertex not in visited:
            visited.append(vertex)
        for i in graph[vertex]:
            if i not in visited:
                queue.append(i)

    return visited


# graph = {0:[1,3], 1:[2,3,5,6], 2:[1,3,4,5], 3:[1,2,4], 4:[2,3,6], 5:[1,2], 6:[1,4]}
graph = {0:[1,2], 1:[0,2], 2:[0,1,3], 3:[]}
a = bfs(graph, 2)
print(a)