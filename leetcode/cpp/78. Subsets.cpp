class Solution {
public:
    vector<vector<int>> ans;
    vector<int> nums;
    void dfs_set(int i, int k,vector<int> now){
        if(k == 0){
            ans.push_back(now);
        }
        else{
            for(; i < nums.size(); ++i){
                now.push_back(nums[i]);
                dfs_set(i+1, k-1, now);
                now.pop_back();
            }
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        sort(nums.begin(), nums.end());
        this->nums = nums;
        vector<int> now;
        for(int i = 0; i <= nums.size(); ++i){
            dfs_set(0, i, now);
        }
        return ans;
    }
};