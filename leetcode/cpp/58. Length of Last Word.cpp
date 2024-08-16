class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = 0, l = 0, b = 0;
        while((b = s.find(" ", a)) != string::npos){
            if(b - a > 0) l = b - a;
            a = b + 1;
        }
        if(a == s.size()) return l;
        else return s.size() - a;
    }
};
