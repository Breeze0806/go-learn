class Solution {
public:
    int hIndex(vector<int>& citations) {
        int l = 0, r = citations.size()-1, ans = r+1;
        while( l <= r ){
            int mid = l+(r-l)/2;
            if(citations[citations.size() - 1 -mid] < mid + 1){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};