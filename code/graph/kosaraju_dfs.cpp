// DFS method used for Kosaraju's
void DFS(AdjList& graph, int i, vector<bool>& visited,
  vector<int>& accesses, bool isPreorder) {
    visited[i] = true;
    
    if (isPreorder)
        accesses.push_back(i);
    
    for (auto e : graph.edges[i])
        if (!visited[e])
            DFS(graph, e, visited, accesses, isPreorder);
    
    if (!isPreorder)
        accesses.push_back(i);
}
