class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int cnt = 1;
        vector<int>::size_type k = 0, i = 0;
        for(; i < nums.size() - 1; ++i){
            if(nums[i] == nums[i + 1]) ++cnt;
            else{
                cnt = min(2,cnt);
                for(int j = 0; j < cnt; ++j){
                    nums[k++] = nums[i];
                }
                cnt = 1;
            }
        }
        cnt = min(2,cnt);
        for(int j = 0; j < cnt; ++j){
            nums[k++] = nums[i];
        }
        return k;
    }
};