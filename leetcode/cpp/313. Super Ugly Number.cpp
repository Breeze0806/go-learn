class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int len = primes.size();
        vector<int> index(len, 0);
        vector<int> uglyNum(n, INT_MAX);
        vector<int> temp(len);
        uglyNum[0] = 1;
        for (int i = 1; i < n; ++i)
        {
            int minj = -1;
            int minNum = INT_MAX;

            for (int j = 0; j < len; ++j)
            {
                temp[j] = primes[j] * uglyNum[index[j]];
                if (temp[j] < uglyNum[i])
                {
                    minNum = temp[j];
                    uglyNum[i] = temp[j];
                    minj = j;
                }
            }
            for (int j = minj; j < len; ++j)
            {
                if (minNum == temp[j])
                ++index[j];
            }
        }
        return uglyNum[n - 1];
    }
};
