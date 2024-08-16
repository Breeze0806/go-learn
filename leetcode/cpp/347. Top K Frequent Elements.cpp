class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		map<int, int> m;
		vector<int> ans;
		for (vector<int>::size_type i = 0; i < nums.size(); ++i){
			if (m.find(nums[i]) == m.end()) m[nums[i]] = 1;
			else m[nums[i]]++;
		}
		multimap<int, int> mm;
		for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it){
			//cout << it->second << " " << it->first << endl;
			mm.insert(pair<int, int>(it->second, it->first));

		}
		for (multimap<int, int>::reverse_iterator it = mm.rbegin(); it != mm.rend() && k; ++it, k--){
			//cout << it->second << " " << it->first << endl;
			ans.push_back(it->second);
		}
		return ans;
	}
};