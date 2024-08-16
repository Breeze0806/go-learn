
class Solution {
public:
	int countPrimes(int n) {
		bool *isp= new bool[n];
		for (int i =0 ; i < n; ++i)
		{
			isp[i]= true;
		}
		for (int i = 2; i * i< n; ++i)
		{
		    if(isp[i]){
    			for(int j = i + i; j < n; j+=i){
    				isp[j] = false;
    			}
		    }
		}
		int ans  = 0;
		for (int i = 2; i < n; ++i){
			ans += isp[i];
		}
		delete isp;
		return ans;
	}
};
