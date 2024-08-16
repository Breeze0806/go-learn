class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int k, int n, int now, string s){
        if(k == 0 && n == 0){
            vector<int> m;
            for(string::size_type i = 0; i < s.size(); ++i){
                m.push_back(s[i] - '0');
            }
            ans.push_back(m);
            return;
        }
        if(k <= 0) return;
        if(n <= 0) return;
        for(int i = now; i < 10; ++i){
            char t[2] = {'0' + i,'\0'};
            dfs(k - 1, n - i, i+1 , s + t);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        dfs(k,n,1,"");
        return ans;
    }
};