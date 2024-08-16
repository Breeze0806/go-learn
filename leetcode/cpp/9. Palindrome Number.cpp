class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int _x = 0 ;
        int n = x;
        for(; x; x/= 10){
            _x = _x * 10 + x%10;
        }
        return n == _x;
    }
};