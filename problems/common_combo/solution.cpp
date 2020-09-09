#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        // our memoization table for each sum
        vector<int> dp(5001);
        
        // set up the base case
        // one subsequence (empty) gives us a sum of 0
        dp[0] = 1;
        
        // add each value to the array
        for (int i = 0; i < n; i++) {
            for (int j = 5000 - v[i]; j >= 0; j--) {
                if (dp[j])
                    dp[j+v[i]] += dp[j];
            }
        }
        
        // get the sum with the greatest frequency
        int best = 0;
        for (int i = 1; i < 5001; i++)
            if (dp[best] < dp[i])
                best = i;
        
        cout << best << '\n';
    }
}