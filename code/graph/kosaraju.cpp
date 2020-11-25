// return each component as a 2D array
AdjList Kosaraju(AdjList& graph) {
    int n = graph.edges.size();
    AdjList transpose(n), ans(0);
    
    // build transpose by reversing directions
    for (int i = 0; i < n; i++) {
        for (auto e : graph.edges[i]) {
            transpose.edges[e].push_back(i);
        }
    }
    
    // DFS from each unvisited node
    vector<bool> visited(n);
    vector<int> order(0);
    for (int i = 0; i < n; i++)
        if (!visited[i])
            DFS(graph, i, visited, order, false);
    
    // DFS in the opposite way
    fill(visited.begin(), visited.end(), false);
    int count = 0;
    for (int i = n-1; i >= 0; i--) {
        if (!visited[order[i]]) {
            ans.edges.push_back(vector<int>());
            DFS(graph, i, visited, ans.edges[count], true);
            count++;
        }
    }
    
    return ans;
}