class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        digits[digits.size() -1]++;
    	reverse(digits.begin(),digits.end());
    	for(vector<int>::size_type i = 0; i < digits.size() - 1; ++i){
    	    if(digits[i] >= 10){
    	        digits[i] -= 10;
    	        digits[i+1] ++;
    	    }
    	}
    	if(digits[digits.size() - 1] >= 10){
    	    digits[digits.size() - 1] -= 10;
    	    digits.push_back(1);
    	}
    	reverse(digits.begin(),digits.end());
    	return digits;
    }
};