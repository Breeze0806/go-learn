class Solution {
public:
    string getHint(string secret, string guess) {
        int cntA = 0, cntB = 0;
        int sn[10] = {0}, gn[10] = {0};
        for(string::size_type i = 0; i < secret.size(); ++i){
            if(secret[i] == guess[i]) cntA++;
            sn[secret[i]-'0']++;
            gn[guess[i]-'0']++;
        }
        for(int i = 0; i< 10; ++i){
            cntB += min(sn[i],gn[i]);
        }
        char s[50];
        sprintf(s, "%dA%dB",cntA,cntB-cntA);
        return string(s);
    }
};