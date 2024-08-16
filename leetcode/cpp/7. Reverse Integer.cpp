class Solution {
public:
    int reverse(int x) {
        unsigned int MAX = 2147483646;
        int ans = 0;
        int sign = 1;
        if(x < 0){
            sign = -1;
            x = -x;
        }
        for(; x; x/= 10){
            if(ans > MAX / 10) return 0;
            ans = ans * 10 + (x % 10);
        }

        return ans*sign;
    }
};