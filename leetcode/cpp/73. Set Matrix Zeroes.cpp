class Solution {
public:
    int m, n;

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if(0 == m) return;
        int n = matrix[0].size();
        if(0 == n) return;
        bool r = false,c = false;

        for(int i = 0; i < n; ++i){
            if(matrix[0][i] == 0) r = true;
        }
        for(int i = 0; i < m; ++i){
            if(matrix[i][0] == 0) c = true;
        }

        for(int i = 1; i < m; ++i){
            for(int j = 1; j < n; ++j){
                if(0 == matrix[i][j]){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < m; ++i){
            if(0 == matrix[i][0]){
                for(int j = 0; j < n; ++j){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; ++i){
            if(0 == matrix[0][i]){
                for(int j = 0; j < m; ++j){
                    matrix[j][i] = 0;
                }
            }
        }

        if(r){
            for(int j = 0; j < n; ++j){
                matrix[0][j] = 0;
            }
        }

        if(c){
            for(int j = 0; j < m; ++j){
                matrix[j][0] = 0;
            }
        }
    }
};