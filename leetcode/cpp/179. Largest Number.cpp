bool cmp(std::string a, std::string b){
		    return a + b > b + a;

}
class Solution {
public:
   	inline std::string inttostr_(int num){
		char s[20] = { 0 };
		sprintf(s,"%d",num);
		return std::string(s);
	}
	std::string largestNumber(std::vector<int>& nums) {
		std::vector<std::string> vstr;
		for (std::vector<int>::size_type i = 0; i < nums.size(); ++i){
			vstr.push_back(inttostr_(nums[i]));
		}

		std::sort(vstr.begin(),vstr.end(),cmp);
		std::vector<std::string>::size_type i = 0;
		for (; i < nums.size(); ++i){
			if (vstr[i] != "0") break;
		}

		if (i == nums.size()) return "0";
		else{
			std::string ans("");
			for (; i<nums.size(); ++i){
				ans += vstr[i];
			}
			return ans;
		}
	}
};