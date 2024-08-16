class Solution {
public:
	int maxProduct(std::vector<std::string>& words) {
		std::vector<int> flg_;
		for (std::vector<std::string>::size_type i = 0; i < words.size(); ++i){
			int tflg_ = 0;
			for (std::string::size_type j = 0; j < words[i].size(); ++j){
				tflg_ |= (1 << (words[i][j] - 'a'));
			}
			flg_.push_back(tflg_);
		}
		int ans = 0;
		for (std::vector<int>::size_type i = 0; i < flg_.size(); ++i){
			for (std::vector<int>::size_type j = i + 1; j < flg_.size(); ++j){
				if ((flg_[i] & flg_[j]) == 0) ans = std::max(ans, (int)(words[i].size() * words[j].size()));
			}
		}
		return ans;
	}
};