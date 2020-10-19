// we need to pass in visited from outside the method now
bool dfs(AdjList& graph, vector<bool>& visited, int pos, int end) {
	// base case
	if (pos == end)
		return true;
	
	for (auto v : graph.edges[pos]) {
		if (!visited[v]) {
			visited[v] = true;
			// recursive check, using v as our new starting pos
			if (dfs(graph, visited, v, end))
				return true;
		}
	}
	
	// we were unable to reach the end from pos
	return false;
}
