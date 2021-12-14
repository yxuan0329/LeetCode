class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size(), i, j;
        int table[m+1][n+1] ;
        for (i=0; i<=m; i++){
            for (j=0; j<=n; j++){
                table[i][j] = 0 ;
            }
        }
            
        for (i=1; i<=m; i++){
            for(j=1; j<=n; j++){
                if (text1[i-1] == text2[j-1])
                    table[i][j] = table[i-1][j-1] +1 ;
                else
                    table[i][j] = max(table[i-1][j], table[i][j-1]);
            }      
        }
        
        return table[m][n] ;   
    }
};
