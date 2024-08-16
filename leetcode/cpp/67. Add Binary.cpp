class Solution {
public:
    string addBinary(string a, string b) {

        if(a.size() < b.size()){
            string t = a;
            a = b;
            b = t;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(string::size_type i = 0; i < a.size(); ++i){
            a[i] +=  ((i < b.size())? b[i] : '0') - '0';
        }

        for(string::size_type i = 0; i < a.size() - 1; ++i){
            if(a[i] >='2' ) {
                a[i] -= 2;
                a[i+1] ++;
            }
        }
        if(a[a.size()-1] >='2' ) {
            a[a.size()-1] -= 2;
            a += "1";
        }
        reverse(a.begin(),a.end());
        return a;
    }
};