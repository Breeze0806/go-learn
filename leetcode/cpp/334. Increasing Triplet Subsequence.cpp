class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> g;
        for(vector<int>::size_type i = 0 ; i<nums.size(); ++i){
            int k = lower_bound(g.begin(),g.end(),nums[i]) - g.begin();
            if(k >= g.size()) g.push_back(nums[i]);
            else g[k] =  nums[i];
            if(g.size() == 3) return true;
        }
        return g.size() == 3;
    }
};