class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sc[3] ={0}, n = nums.size();
    	for(int i = 0; i<n; ++i){
    		sc[nums[i]]++;
    	}
    	int sum = 0;
    	for (int i = 0;i<3;++i)
    	{
    		for (int j = 0;j<sc[i];++j)
    		{
    			nums[j+sum] = i;
    		}
    		sum += sc[i];
    	}
    }
};