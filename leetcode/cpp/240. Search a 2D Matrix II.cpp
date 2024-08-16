class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        if(n == 0) return false;

        for(int t = 0; t < m; ++t){
            if(target < matrix[t][0]) return false;
            int l = 0, r = n - 1;
            while(l <= r){
                int mid = l + (r-l+1)/2;
                if(matrix[t][mid] == target) return true;
                if(matrix[t][mid] > target){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
        }
        return false;
    }
};