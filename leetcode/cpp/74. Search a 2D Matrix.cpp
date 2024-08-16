class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        set<int> s;
    	for (int i = 0;i<matrix.size();++i)
    	{
    		for (int j =0;j<matrix[i].size();++j)
    		{
    			s.insert(matrix[i][j]);
    		}
    	}
    	return s.find(target) != s.end();
    }
};