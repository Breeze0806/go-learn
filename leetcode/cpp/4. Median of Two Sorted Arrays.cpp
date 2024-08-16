class Solution {
public:
	int findkth(vector<int>& nums1, vector<int>& nums2, int k){
		int l = min(nums1[0],nums2[0]);
		int r = max(nums1[nums1.size() - 1], nums2[nums2.size() - 1]);
		while(l <= r){
			int mid = l + (r - l)/ 2;
			int k1 = upper_bound(nums1.begin(), nums1.end(), mid) -  nums1.begin() ;
			int k2 = upper_bound(nums2.begin(), nums2.end(), mid) -  nums2.begin() ;
			if(k1 + k2 == k){
				if(k1 > 0 && mid == nums1[k1 - 1]) return mid;
				else if(k2 > 0 && mid == nums1[k2 - 1]) return mid;
				else r = mid - 1;
			}
			else if(k1 + k2 > k){
				r = mid - 1;
			}
			else l = mid + 1;
		}
		return l;
	}
    double getmid(vector<int>& nums){
        if(nums.size() % 2 == 0) return (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2.0;
        else return nums[nums.size() / 2];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0 && nums2.size() == 0) return 0.0;
        if(nums1.size() == 0) return getmid(nums2);
        if(nums2.size() == 0) return getmid(nums1);
        int k = (nums1.size() + nums2.size() + 1) / 2;
        if((nums1.size() + nums2.size()) % 2 == 0){
            return (findkth(nums1, nums2, k) + findkth(nums1, nums2, k + 1))/2.0;
        }
        else return findkth(nums1, nums2, k);
    }
};