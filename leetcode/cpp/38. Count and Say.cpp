class Solution {
public:
    vector<string> vs_;
    Solution(){
        string t("1");
        vs_.push_back(t);
        for(int i = 1; i< 30;++i){
            string t1  = vs_[i - 1];
            t = "";
            int cnt = 1,j ;

            for(j = 0; j < t1.size() - 1; ++j){
                if(t1[j] == t1[j + 1]){
                    ++cnt;
                }
                else{
                    char s[20] ="";
                    sprintf(s,"%d%c",cnt,t1[j]);
                    t += string(s);
                    cnt = 1;
                }
            }
            char s[20] ="";
            sprintf(s,"%d%c",cnt,t1[j]);
            t += string(s);
            vs_.push_back(t);
        }
    }
    ~Solution(){
        vs_.clear();
    }

    string countAndSay(int n) {
        return vs_[n-1];
    }
};