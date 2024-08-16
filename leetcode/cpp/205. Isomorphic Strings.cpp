class Solution {
public:
	bool isIsomorphic(string s, string t) {
		int hs[260] = {0};
		int ht[260] = {0};
		if (s.size() != t.size()) return false;
		int o = 0;
		for (int i =0;i<s.size(); ++i)
		{
			if(hs[s[i]] == 0)  hs[s[i]] = ++o;
		}
		o = 0;
		for (int i =0;i<t.size(); ++i)
		{
			if(ht[t[i]] == 0)  ht[t[i]] = ++o;
		}
		for (int i = 0;i<s.size(); ++i){
			if(hs[s[i]] != ht[t[i]])  return false;
		}
		return true;
	}
};