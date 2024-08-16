class Solution {
public:
vector<vector<int> > fourSum(vector<int>  &num, int target) {
	vector<vector<int> > ans;
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); ++i)
	{
		if(i > 0 && num[i] == num[i-1]  ) continue; //i>0写前面;
		for(int j = num.size() - 1; j > i; --j)
		{
			if(  j + 1< num.size() && num[j] == num[j+1]) continue;//同上;
			int f = target - num[i] - num[j];
			int b = i + 1, e = j - 1;
			while(b < e){
				if(b > i + 1 && num[b] == num[b - 1]  ) {//必须写成b > i + 1 0 0 0 0
					b++;
					continue;
				}
				if(e + 1 < j && num[e] == num[e + 1]  ) {//必须写成e + 1 < j 0 0 0 0
					e--;
					continue;
				}
				int sum = num[b] + num[e];
				if(sum == f){
					vector<int> t;
					t.push_back(num[i]);
					t.push_back(num[b++]);//b++重要!!
					t.push_back(num[e--]);//e--重要!!
					t.push_back(num[j]);
					ans.push_back(t);
				}
				else if(sum > f) e--;
				else b++;
			}
		}
	}
	return ans;
}
};