class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size(), -0xfffffff);
        dp[0] = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            dp[i] = max(max(0,dp[i-1]) + nums[i],dp[i]);
        }
        int ans = dp[0];
        for(int i = 1; i < nums.size(); ++i){
            ans = max(dp[i],ans);
        }
        return ans;
    }
};