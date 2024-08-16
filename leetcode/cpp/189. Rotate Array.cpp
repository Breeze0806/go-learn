class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 0) return;
		k %= nums.size();
		if(0 == k) return;
		reverse(nums.begin(), nums.end() - k);
		reverse(nums.end() - k, nums.end());
		reverse(nums.begin(), nums.end());
	}
};