class Solution {
public:
    double pow(double x, int n) {
    	if(x < 1e-9&&x > -1e-9 ) return 1.0;


    	unsigned int ui = n;
    	if(n<0) {
    		x = 1.0/x;
    		ui= -n;
    	}
    	double ans = 1.0;

    	for(;ui;ui>>=1,x =x * x){
    		if(ui&1) ans *= x;
    	}
    	return ans;
    }
};