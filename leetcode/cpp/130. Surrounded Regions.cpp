class Solution {
public:

    int m, n;
	bool is_in(int x, int y)
	{
		return (x < m-1) && (x >= 1) && (y < n-1) && (y >= 1);
	}

	void dfs(std::vector<std::vector<char>> &board,int x,int y)
	{
		board[x][y] = 'T';
		int dir[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
		for (int i = 0; i < 4; ++i){
			int tx = x + dir[i][0];
			int ty = y + dir[i][1];
			if (is_in(tx, ty) && board[tx][ty] == 'O')
			{
				dfs(board, tx, ty);
			}
		}
	}

	void change(std::vector<std::vector<char>> &board)
	{
		for (int i = 0; i < m;++i){
			for (int j = 0; j < n;++j){
				if (board[i][j] == 'T') board[i][j] = 'O';
				else if (board[i][j] == 'O') board[i][j] = 'X';
				else;
			}
		}
	}

	void solve(std::vector<std::vector<char>> &board){
		m = board.size();
		if (m == 0) return;
		n = board[0].size();
		if (n == 0) return;
		for (int i = 0; i < m;++i){
			if (board[i][0] == 'O') dfs(board, i, 0);
			if (board[i][n - 1] == 'O') dfs(board, i, n-1);
		}
		for (int i = 0; i < n; ++i){
			if (board[0][i] == 'O') dfs(board, 0, i);
			if (board[m-1][i] == 'O') dfs(board, m-1, i);
		}
		change(board);
	}
};