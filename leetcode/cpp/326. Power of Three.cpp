class Solution {
public:
    bool isPowerOfThree(int n) {
       // double m = log10(n*1.0)/log10(3.0);
        if(n>0) return 1162261467%n==0;//fabs(m - (int)(m)) < 1e-9;
        else return false;
    }
};