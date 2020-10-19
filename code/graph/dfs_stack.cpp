bool dfs(AdjList& graph, int pos, int end) {
	// set up data structures
	vector<bool> visited(graph.edges.size());
	stack<int> s;
	
	// add our start to the stack and mark as visited
	s.push(pos);
	visited[pos] = true;
	while (s.size() > 0) {
		// get the current node
		int cur = s.top(); s.pop();
		
		// for every edge from the current node
		// we check if it's already visited
		for (auto v : graph.edges[cur]) {
			if (!visited[v]) {
				// if the node is the end, return
				if (v == end)
					return true;
				
				// mark as visited and add to stack
				visited[v];
				s.push(v);
			}
		}
	}
	
	// we were unable to reach the end from pos
	return false;
}
