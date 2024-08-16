class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        vector<int> t(n,0);
        ans.resize(n, t);
        int cnt = 0;
        for(int i = 0; i < (n + 1) / 2; ++i){
            for(int j = i; j < n - i; ++j){
                ans[i][j] = ++cnt;
            }
            for(int j = i + 1; j < n - i - 1; ++j){
                ans[j][n - i - 1] = ++cnt;
            }
            for(int j = n - i - 1; j >= i ; --j){
                ans[n - i - 1][j] = ++cnt;
            }
            for(int j = n - i - 2; j >= i + 1; --j){
                ans[j][i] = ++cnt;
            }
        }
        if(n & 1)ans[n/2][n/2] = n * n;
        return ans;
    }
};