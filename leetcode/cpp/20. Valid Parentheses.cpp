class Solution {
public:
    bool isValid(string s) {
        stack<char> sc;
        char in[] ="([{";
        char out[] =")]}";
        for(string::size_type i = 0; i < s.size(); ++i){
            for(int j = 0; j < 3; ++j){
                if(in[j] == s[i]) sc.push(s[i]);
            }
            for(int j = 0; j < 3; ++j){
                if(out[j] == s[i]){
                    if(sc.empty()) return false;
                    else if(sc.top() == in[j]) sc.pop();
                    else return false;
                }
            }
        }
        return sc.empty();
    }
};