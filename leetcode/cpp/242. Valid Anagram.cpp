class Solution {
public:

	bool isAnagram(string s, string t) {
		int flgs[26] = {0};
		for(int i = 0;i<s.size();++i){
			flgs[s[i] - 'a'] ++;
		}
		int flgt[26] = {0};
		for(int i = 0;i<t.size();++i){
			flgt[t[i] - 'a'] ++;
		}
		for(int i = 0;i< 26;++i){
	        if(flgs[i] != flgt[i]) return false;
		}
		return true;
	}
};