struct AdjList {
	// storing edges
	vector<vector<int>> edges;
	
	// constructor, n is number of nodes
	AdjList(int n) : edges(n) {}
	
	// add edge, a and b are 0-indexed
	void add(int a, int b) {
		edges[a].push_back(b);
	}
};