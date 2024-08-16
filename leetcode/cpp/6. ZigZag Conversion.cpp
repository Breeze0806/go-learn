class Solution {
public:
    string convert(string s, int numRows) {
        string t = s;
        if(numRows == 1) return t;
        int k = 0;
        for(string::size_type i = 0; i < s.size(); i += 2 * numRows - 2){
            t[k++] = s[i];
        }
        for(int i = 1; i < numRows - 1; ++i){
            for(string::size_type j = i; j < s.size(); j += 2 * numRows - 2){
                t[k++] = s[j];
                if(j + 2 * numRows - 2 - 2 * i< s.size()) {
                    t[k++] = s[j + 2 * numRows - 2 - 2 * i];
                }
            }
        }
        for(string::size_type i = numRows - 1; i < s.size(); i += 2 * numRows - 2){
            t[k++] = s[i];
        }
        return t;
    }
};