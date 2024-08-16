class Solution {
public:
	int myAtoi(string str) {
	int sign = 1,i = 0;
		for(;i<str.size() && str[i] == ' '; ++i);
		char ss[3] ="+-" ;
		int sn[3] ={1,-1};
		for(int j =0;j<2;++j){
			if(str[i] == ss[j]) {
				sign *= sn[j];
				i++;
				break;
			}
		}

		long long ans = 0;
		for (; i<str.size(); ++i)
		{
			if(str[i] <= '9' && str[i]>='0'){
				ans = 10*ans + str[i] - '0';
				if(sign == 1 && ans > (long long)INT_MAX){
					ans = (long long)INT_MAX;break;
				}
				else if(sign == -1 && ans> -(long long)INT_MIN){
					ans = -(long long)INT_MIN;break;
				}
			}
			else break;
		}
		return ans * sign;
	}
};