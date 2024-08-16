class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,int> mp;
        map<string,int> ms;
        vector<int> p,s;
        int cnt = 0;
        for(string::size_type i = 0; i < pattern.size(); ++i){
            if(mp.find(pattern[i]) == mp.end()){
                mp[pattern[i]] = cnt++;
                p.push_back(mp[pattern[i]]);
            }
            else p.push_back(mp[pattern[i]]);
        }
        int a = 0, b = 0;
        cnt = 0;
        while((b = str.find(" ", a)) != string::npos){
            string t = str.substr(a, b - a);
            if(ms.find(t) == ms.end()){
                ms[t] = cnt++;
                s.push_back(ms[t]);
            }
            else s.push_back(ms[t]);
            a = b + 1;
        }
        b = str.size();
        string t = str.substr(a, b - a);
        if(ms.find(t) == ms.end()){
            ms[t] = cnt++;
            s.push_back(ms[t]);
        }
        else s.push_back(ms[t]);
        if(p.size() != s.size()) return false;
        for(vector<int>::size_type i = 0; i < s.size(); ++i){
            if(s[i] != p[i]) return false;
        }
        return true;
    }
};