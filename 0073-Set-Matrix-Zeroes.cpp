// 1st way : space O(m+n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize = matrix.size(), colSize = matrix[0].size() ; // m * n matrix
        vector<int> rowMarker(rowSize, 1) ;
        vector<int> colMarker(colSize, 1) ;
        for (int i=0; i<rowSize; i++){
            for (int j=0; j<colSize; j++){
                if (matrix[i][j] == 0){
                    rowMarker[i] = 0;
                    colMarker[j] = 0;
                }
            }
        }
        
        for (int i=0; i<rowSize; i++){
            for (int j=0; j<colSize; j++){
                if (rowMarker[i] == 0 or colMarker[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};

// space O(1) ?
