class Solution {
public:
   	int majorityElement(vector<int>& nums) {
		int candidate;
		int ntimes,i;
		for(ntimes = i = 0; i < nums.size(); ++i){
			if(ntimes == 0){
				candidate = nums[i],ntimes =1;
			}
			else{
				if(candidate == nums[i]) ntimes ++;
				else ntimes--;
			}
		}
		return candidate;
	}
};