struct PersistentQueue {
	// storage of all elements added in order
	vector<int> elements;
	// history of subarray window
	vector<pair<int,int>> sizes;
	
	// by default, have an empty queue in the history
	PersistentQueue() {
		sizes.push_back({0,0});
	}
	
	// put an element into the back of the queue
	void push(int value) {
		pair<int,int> last = sizes.back();
		
		elements.push_back(value);
		sizes.push_back({last.first, last.second + 1});
	}
	
	// remove an element from the front of the queue
	void pop() {
		pair<int,int> last = sizes.back();
		
		// error if the queue is empty
		assert(last.second > 0);
		
		sizes.push_back({last.first + 1, last.second - 1});
	}
	
	// check what the front of the queue is
	// state is what point in history it is
	int front(int state) {
		pair<int,int> size = sizes[state];
		
		// error if the queue is empty
		assert(size.second > 0);
		
		return elements[size.first];
	}
};