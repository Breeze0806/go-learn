class Solution {
public:
    map<char,int> m;
    Solution(){
        const int N = 7;
    	char str[N+1] = "IVXLCDM";
    	int num[N] ={1,5,10,50,100,500,1000};
    	for (int i = 0; i < N; ++i){
    		m[str[i]] = num[i];
    	}
    }
    ~Solution(){
        m.clear();
    }
    int romanToInt(string s) {
    	int ans = 0;
    	for(int i = 0;i<s.size()-1;++i){
    		if (m[s[i]]<m[s[i+1]]) ans -= m[s[i]];
    		else ans += m[s[i]];
    	}
    	ans += m[s[s.size() - 1]];
    	return ans;
    }
};