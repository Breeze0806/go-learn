class Solution {
	std::vector<std::string> vstr;
	void dfsParenthesis(int cnt, int precnt, std::string str){
		if (cnt < 0 || precnt < 0) return;
		if (0 == cnt && 0 == precnt){
			vstr.push_back(str);
			return;
		}
		dfsParenthesis(cnt - 1, precnt + 1, str + "(");
		dfsParenthesis(cnt , precnt - 1, str + ")");
	}
public:
	std::vector<std::string> generateParenthesis(int n) {
		vstr.clear();
		dfsParenthesis(n, 0, "");

		return vstr;
	}
};