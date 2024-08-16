class Solution {
public:
vector<int> grayCode(int n) {

	vector<int> m;
	m.push_back(0);
	if (n == 0)
	{
		return m;
	}
	for (int i = 1; i < (1<<n); ++i)
	{
		int cnt = 0, t = i, k  = 1 ;

		while(t - 1){
			t /= 2;
			++cnt;
		}

		while(cnt--)
		{
			k *= 2;
		}

		m.push_back(k + m[2*k - i - 1]);
	}
	return m;
}
};