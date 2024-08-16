class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::size_type j = 0;
        for(vector<int>::size_type i = 0; i < nums.size(); ++i){
            if(nums[i] != val) nums[j++] = nums[i];
        }
        return j;
    }
};