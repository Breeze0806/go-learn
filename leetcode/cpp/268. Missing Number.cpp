class Solution {
public:
	int missingNumber(std::vector<int>& nums) {
		int ans = 0;
		for (std::vector<int>::size_type i = 0; i < nums.size(); ++i){
			ans ^= nums[i];
		}
		for (int i = 0; i <= nums.size(); ++i){
			ans ^= i;
		}
		return ans;
	}
};