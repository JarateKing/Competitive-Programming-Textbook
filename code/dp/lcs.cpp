int LCS(string l, string r) {
    // get sizes for convenience
    int m = l.size();
    int n = r.size();
    
    // our 2d dp state table
    int table[m+1][n+1];
    
    // initialize base states
    for (int i = 0; i <= m; i++)
        table[i][0] = 0;
    for (int i = 0; i <= n; i++)
        table[0][i] = 0;
    
    // perform dp
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (l[i-1] == r[j-1])
                table[i][j] = table[i-1][j-1]+1;
            else
                table[i][j] = max(table[i-1][j], table[i][j-1]);
        }
    }
    
    return table[m][n];
}