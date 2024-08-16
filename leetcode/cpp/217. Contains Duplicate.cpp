class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int,int> mii;
		for (int i = 0;i<nums.size() ;++i)
		{
			if (mii.find(nums[i]) != mii.end())
			{
				 return true;
			}
			mii[nums[i]] = i;
		}
		return false;
    }
};