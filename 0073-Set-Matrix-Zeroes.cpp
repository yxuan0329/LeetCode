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
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row = false, col = false;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0) {
                    if(i == 0) row = true;
                    if(j == 0) col = true;
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }
        for(int i=1; i<matrix.size(); i++){
            for(int j=1; j<matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        if(col){
            for(int i=0; i<matrix.size(); i++)
                matrix[i][0] = 0;
        }
        if(row){
            for(int j=0; j<matrix[0].size(); j++)
                matrix[0][j] = 0;
        }
    }
};
