class Solution {
public:
	std::vector<int> productExceptSelf(std::vector<int>& nums) {
		std::vector<int> output(nums.size(), 1);
		if(nums.size() == 1) return nums;
		for(std::vector<int>::size_type i =  1; i < nums.size(); ++i){
			output[i] *= output[i-1] * nums[i -1];
		}
		int mul = 1;
		for(int i =  nums.size() - 2 ; i >= 0 ; --i){
			mul *= nums[i + 1];
			output[i] *= mul;
		}
		return output;
	}
};