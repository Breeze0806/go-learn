class Solution {
public:
    int mySqrt(int x) {
        long long a = 0,b = x;
    	while(a <= b ){
		    long long mid = a + ( b-a ) /2;
		    if(mid * mid == x) return mid;
		    if(mid * mid< x ) a = mid + 1;
	    	else b  = mid - 1;
    	}
	    return (int)b;
    }
};
