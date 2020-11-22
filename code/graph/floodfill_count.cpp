int countRegions(vector<string>& grid, int w, int h) {
    int count = 0;
    
    // iterate over every point
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // if the point is a '.' we increment count and floodfill
            // so that anything else in the region is no longer a '.'
            if (grid[i][j] == '.') {
                count++;
                floodfill(grid, w, h, j, i);
            }
        }
    }
    return count;
}
