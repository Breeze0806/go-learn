class Solution {
public:
   
   vector<int> singleNumber(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i<nums.size(); ++i){
            a ^= nums[i];
        }
        vector<int> ans(2,0);
        a &= (-a);
        for(int i = 0; i<nums.size(); ++i){
            ans[ (nums[i] & a) == 0 ] ^= nums[i];  
        }
        return ans;
    }
};