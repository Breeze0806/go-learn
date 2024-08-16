class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
    	vector<int> v;
    	int *s = lower_bound(A, A+n, target);
    	if(*s != target){
    		v.push_back(-1);
    		v.push_back(-1);
    		return v;
    	}
    	v.push_back(s-A);
    	s = upper_bound(A, A+n, target);
    	v.push_back(s-A -1);
    	return v;
    }
};