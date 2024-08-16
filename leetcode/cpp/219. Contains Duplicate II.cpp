class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		map<int,int> mii;
		for (int i = 0;i<nums.size() ;++i)
		{
			if (mii.find(nums[i]) != mii.end())
			{
				if(i - mii[nums[i]] <= k) return true;
			}
			mii[nums[i]] = i;
		}
		return false;
	}
};