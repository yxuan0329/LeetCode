class Solution {
public:
    int numTrees(int n) {
        // Catalan number
        long long int ans = 1, i = 1, j =1;
        for(i=n+1, j=1; i<=n*2, j<=n; i++, j++){
            ans = ans * i / j;
        }
        return ans / (n+1);
    }
};
