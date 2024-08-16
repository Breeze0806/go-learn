class Solution {
public:
int uniquePaths(int m, int n) {
	int s[101][101];
	for (int i = 1; i <= n; ++i)
		s[1][i] = 1;
	for (int i = 1; i <= m; ++i)
		s[i][1] = 1;
	for (int i = 2; i <= m; ++i)
	{
		for (int j = 2; j <= n; ++j)
		{
			s[i][j] = s[i-1][j] + s[i][j-1];
		}
	}
	return s[m][n];
}
};