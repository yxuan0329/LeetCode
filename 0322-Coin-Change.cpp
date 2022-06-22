class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        n = n + 1;
        int dp[n] ;
        dp[0] = 0;
        sort(coins.begin(), coins.end()) ;
        
        for (int i = 0; i< coins.size(); i++)
            cout << coins[i] ;
        for (int i=1; i<n; i++){
            dp[i] = INT_MAX ;
            for(int c: coins){
                if (i-c < 0) break ;
                if (dp[i-c] != INT_MAX)
                    dp[i] = min(dp[i], dp[i-c] + 1) ;
            }
        }
        return dp[--n] == INT_MAX ? -1 : dp[n];
    }
};
