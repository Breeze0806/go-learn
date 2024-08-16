class Solution {
public:
	int next_(int n,std::vector<int>& nums){
		return nums[n ];
	}

	int findDuplicate(std::vector<int>& nums) {
		int one = nums[0];
		int two = nums[0];
		while(true){
			one = next_(one,nums);
			two = next_(next_(two, nums),nums);
			if (one == two) break;
		}
		//std::cout << one << std::endl;
		int now = nums[0];
		int cnt1 = 0, cnt2 = 0;
		while (now != one){
			now = next_(now,nums);
			cnt1++;
		}
		now = next_(one,nums);
		while (now != one){
			now = next_(now, nums);
			cnt2++;
		}
		//std::cout << cnt1 << " " << cnt2 << std::endl;
		int cnt = cnt1 - cnt2;
		int now1 = nums[0];
		int now2 = next_(one, nums);
		if (cnt > 0){
			while (cnt--){
				now1 = next_(now1, nums);
			}
		}
		else{
			cnt = -cnt;
			while (cnt--){
				now2 = next_(now2, nums);
			}
		}
		while(now1 !=now2 ){
			now1 = next_(now1, nums);
			now2 = next_(now2, nums);
		}
		return now1;
	}
};