class Solution {
public:
    bool isPalindrome(string s) {
        string::size_type  j = 0;
        for(string::size_type i = 0; i< s.size(); ++i){
            if(isalpha(s[i]) || isdigit(s[i])) {
                if(isupper(s[i])) s[j++] = s[i] - 'A' + 'a';
                else s[j++] = s[i] ;
            }
        }
        string t = s.substr(0, j);
        string str = t;
        reverse(t.begin(),t.end());
        return t == str;
    }
};