class Solution {
public:

	int numSquares(int n) {
		int *dp = new int[n + 1];
		dp[0] = 0;
		for(int i = 1 ;i <= n ; ++i) dp[i] = n + 1;
		for(int i = 1; i * i <= n; ++i){
			for(int j = i * i; j <= n; ++j){
				dp[j] = min(dp[j-i*i] + 1, dp[j]);
			}
		}
		int ans = dp[n];
		return ans;
	}
};