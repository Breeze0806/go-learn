class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        for(int i = 0; i < citations.size(); ++i){
            if (citations[citations.size() - i - 1] <  i + 1) return i ;
        }
        return citations.size();
    }
};