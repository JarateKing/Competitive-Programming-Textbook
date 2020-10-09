struct Edge {
	int a, b;
};

struct EdgeList {
	// storing edges
	vector<Edge> edges;
	
	// add edge
	void add(int a, int b) {
		edges.push_back({a, b});
	}
};