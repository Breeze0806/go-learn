class Solution {
    vector<int> v;
public:

    Solution(){
        v.resize(2, 1);
    }
    ~Solution(){
        v.clear();
    }

    int numTrees(int n) {
        if(n < v.size()) return v[n];
        for(int i = v.size(); i <= n; ++i){
            int m = 0;
            for(int j = 1; j <= i; ++j){
                m += v[j - 1] * v[i -j];
            }
            v.push_back(m);
        }
        return v[n];
    }
};