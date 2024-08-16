class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string ans = "";
		if (strs.size() != 0)
			{for (int i = 0; i< strs[0].size(); ++i )
			{
				int flg = 0;
				ans = strs[0].substr(0,i+1);
				for (int j = 1; j < strs.size();++j)
				{
					if(strs[j].substr(0,i+1) != ans) {
						flg = 1;
						break;
					}
				}
				if(flg == 1) {
					ans = ans.substr(0,i);break;
				}
			}

		}
		return ans;
	}
};