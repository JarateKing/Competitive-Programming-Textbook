// grid helper
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

// given a 2D char array "grid" of '.' and '#'
// fill any continuous region of '.' containing grid[y][x] with '!'
void floodfill(vector<string>& grid, int w, int h, int x, int y) {
    grid[y][x] = '!';
    
    for (int d = 0; d < 4; d++) {
        int x2 = x + dx[d];
        int y2 = y + dy[d];
        
        if (x2 >= 0 && x2 < w && y2 >= 0 && y2 < h && grid[y2][x2] == '.')
            floodfill(grid, w, h, x2, y2);
    }
}
