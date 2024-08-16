class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex < 2) return vector<int>(rowIndex + 1,1);
        int n = rowIndex;
        vector<int> t[2];
        for(int i = 0; i < 2; ++i){
           t[i].resize(n + 1, 1);
        }
        for(int i = 2; i <= n; ++i){
            for(int j = 1; j < i; ++j){
                t[(i+1)%2][j] = t[i%2][j] + t[i%2][j - 1];
            }
        }
        return t[(n+1) % 2];
    }
};