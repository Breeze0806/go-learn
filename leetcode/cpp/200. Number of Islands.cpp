class Solution {
public:
	int m, n;
	bool is_in(int x, int y)
	{
		return (x < m ) && (x >= 0) && (y < n ) && (y >= 0);
	}

	void dfs(std::vector<std::vector<char>> &board, int x, int y)
	{
		board[x][y] = '0';
		int dir[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
		for (int i = 0; i < 4; ++i){
			int tx = x + dir[i][0];
			int ty = y + dir[i][1];
			if (is_in(tx, ty) && board[tx][ty] == '1')
			{
				dfs(board, tx, ty);
			}
		}
	}

	int numIslands(std::vector<std::vector<char>>& grid)
	{
		m = grid.size();
		if (m == 0) return 0;
		n = grid[0].size();
		if (n == 0) return 0;
		int ans = 0;
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j){
				if (grid[i][j] == '1'){
					dfs(grid, i, j);
					ans++;
				}
			}
		}
		return ans;
	}
};