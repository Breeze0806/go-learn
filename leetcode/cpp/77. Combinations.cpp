class Solution {
public:
    vector<vector<int>> ans;
    int n , k;
    void dfs(int x, int y, vector<int> &t){
        if(y == k){
            ans.push_back(t);
            return;
        }
        else{
            for(x++; x<=n; ++x){
                t[y] = x;
                dfs(x,y+1,t);
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int> t(k);
        this->n = n;
        this->k = k;
        dfs(0, 0, t);
        return ans;
    }
};