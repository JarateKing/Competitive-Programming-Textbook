struct AdjMatrix {
	// storing edges
	vector<vector<bool>> edges;
	
	// constructor, n is number of nodes
	AdjMatrix(int n) : edges(n) {
		for (int i = 0; i < n; i++)
			edges[i] = vector<bool>(n);
	}
	
	// add edge, a and b are 0-indexed
	void add(int a, int b) {
		edges[a][b] = true;
	}
};