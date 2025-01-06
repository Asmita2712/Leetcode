class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> set(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++){
            for(int j=0; j < m; j++){
                if(matrix[i][j] == 0){
                    set[i][j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j=0; j < m; j++){
                if(set[i][j] == 1){
                   markRow(i, matrix, n, m);
                   markCol(j, matrix, n, m);
                }
            }
        }
    }

    void markRow(int i, vector<vector<int>>& matrix, int n, int m){
            for(int j=0; j< m; j++){
                matrix[i][j] = 0;
            }
        }

    void markCol(int j, vector<vector<int>>& matrix, int n, int m){
        for(int i=0; i< n; i++){
            matrix[i][j] = 0;
        }
    }
};