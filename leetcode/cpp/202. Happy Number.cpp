class Solution {
public:
	int getnum(int n){
		int sum =0;
		while(n){
			sum+=(n%10)*(n%10);
			n/=10;
		}
		return sum;
	}
	bool isHappy(int n) {
		int s1 = n, s2 = n;
		while(1){
			s1 = getnum(s1);
			s2 = getnum(getnum(s2));
			if(s1 == 1||s2 == 1) return true;
			if(s1 ==s2) return false;
		}
	}
};