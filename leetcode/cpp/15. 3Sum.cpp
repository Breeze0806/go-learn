class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {

    	vector<vector<int> > ans;
    	sort(num.begin(),num.end());
    	for (int i = 0;i<num.size(); ++i)
    	{
    		if (i > 0 && num[i] == num[i - 1]) continue;
    		int f = - num[i];
    		int b = i + 1, e = num.size() - 1;
    		while(b < e)
    		{
    			if (b > i + 1 && num[b - 1] == num[b])
    			{
    				b++;
    				continue;
    			}
    			if (e + 1 < num.size() && num[e + 1] == num[e])
    			{
    				e--;
    				continue;
    			}
    			int sum = num[b] + num[e];
    			if (sum == f)
    			{
    				vector<int> t;
    				t.push_back(num[i]);
    				t.push_back(num[b++]);
    				t.push_back(num[e--]);
    				ans.push_back(t);
    			}
    			else if(sum > f) e--;
    			else b++;
    		}
    	}
    	return ans;
    }
};