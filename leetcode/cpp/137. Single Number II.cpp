class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0, xthrees = 0;
        for(int i = 0; i < nums.size(); ++i) {
            twos |= (ones & nums[i]);
            ones ^= nums[i];
            xthrees = ~(ones & twos);
            ones &= xthrees;
            twos &= xthrees;
        }
        return ones;
    }
};