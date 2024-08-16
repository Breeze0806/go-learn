class Solution {
public:
	std::vector<bool> l,r,c;
	int ans;
	int totalNQueens(int n) {
		l.resize(2 * n + 1, false);
		r.resize(2 * n + 1, false);
		c.resize(    n    , false);
		ans = 0;
		N_Queens(0 , n);
		l.clear();
		r.clear();
		c.clear();
		return ans;
	}
	void N_Queens(int now, int n){
		if (now == n) {
			ans++;
			return;
		}
		else{
			for (int i = 0; i < n; ++i){
				if (is_legal(now, i, n)){
					init(now, i, n, true);
					N_Queens(now + 1, n);
					init(now, i, n, false);
				}
			}
		}
	}
	bool is_legal(int x, int y, int n){
		return !c[y] && !l[x - y + n] && !r[x + y];
	}
	void init(int x, int y, int n, bool b){
		c[y] = l[x - y + n] = r[x + y] = b;
	}
};