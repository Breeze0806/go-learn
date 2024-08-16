class Solution {
public:
    string convertToTitle(int n) {
        string s("");
        for(; n--; n/=26){

            s += string("A");
            s[s.size() - 1] += n% 26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};