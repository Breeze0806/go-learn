class Solution {
public:
	int m, n;
	bool is_in(int x, int y){
		return x >= 0 && y >= 0 && x < m && y < n;
	}
	int getNum_Life(vector<vector<int>> board, int x ,int y){
		int way[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
		int cnt = 0;
		for(int i = 0; i < 8; ++i){
			int tx = x + way[i][0];
			int ty = y + way[i][1];
			if(is_in(tx,ty)) cnt += (board[tx][ty] & 1);
		}
		return cnt;
	}
	void gameOfLife(vector<vector<int>>& board) {
		m = board.size();
		if(m == 0) return;
		n = board[0].size();
		if(n == 0) return;
		for(int i = 0; i < m; ++i){
			for(int j = 0; j < n; ++j){
				int cnt = getNum_Life(board,i,j);
				if((board[i][j] & 1) == 0){
					if(cnt == 3){
						board[i][j] |= (1<<1);
					}
				}
				else {
					if(cnt < 2 ){
						board[i][j] |= (0<<1);
					}
					else if(cnt > 3 ){
						board[i][j] |= (0<<1);
					}
					else board[i][j] |= (1<<1);
				}

			}
		}
		for(int i = 0; i < m; ++i){
			for(int j = 0; j < n; ++j){
				board[i][j] >>=1;
			}
		}
	}
};