class Solution {
    vector<vector<int>> v;
    public:
    Solution() {
        for(int i = 0; i < 50; ++i){
            vector<int> t(i+1,1);
            for(int j = 1; j < i; ++j){
                t[j] = v[i-1][j] + v[i-1][j - 1];
            }
            v.push_back(t);
        }
    }

    vector<vector<int>> generate(int numRows) {
        return vector<vector<int>>(v.begin(), v.begin() + numRows);
    }
};