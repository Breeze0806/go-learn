class Solution {
public:
    typedef long long __int64;
   	inline __int64 getShang_(__int64 numerator, __int64 denominator){
		return abs(numerator) / abs(denominator);
	}

	inline __int64 getMod_(__int64 numerator, __int64 denominator){
		return abs(numerator) % abs(denominator);
	}

	inline std::string inttostr_(__int64 num){
		char t[20] = { 0 };
		 sprintf(t, "%lld", num);
		return std::string(t);
	}

	std::string fractionToDecimal(int numerator, int denominator) {
		std::string Integer_("");
		if ((double)numerator / denominator < 0) Integer_ = "-";
		Integer_ += inttostr_(getShang_(numerator, denominator));

		if (0 == getMod_(numerator,denominator) ) {
			return Integer_;
		}
		Integer_ += ".";
		__int64 tnumerator = numerator;
		tnumerator = getMod_ (tnumerator, denominator);
		__int64 one = tnumerator;
		__int64 two = tnumerator;
		std::vector<__int64> vyushu;
		std::string Decimal_("");
		vyushu.push_back(two);
		int cnt = 0;
		while (true)
		{
			one = getMod_(one * 10, denominator);

			Decimal_ += inttostr_(getShang_(two * 10, denominator));
			two = getMod_(two * 10, denominator);
			vyushu.push_back(two);
			if (0 == two) break;

			Decimal_ += inttostr_(getShang_(two * 10, denominator));
			two = getMod_(two * 10, denominator);
			vyushu.push_back(two);
			if (0 == two) break;

			cnt++;
			if (two == one) break;
		}

		if (two){
			int j = 0, k = 0;
			for (std::vector<int>::size_type i = vyushu.size()-1; i >= 0&& i>=cnt; --i){
				if (vyushu[ i -cnt] != vyushu[ i]){
					j = i - cnt + 1;
					break;
				}
			}
			for (std::vector<int>::size_type i = j + 1; i < vyushu.size(); ++i){
				if (vyushu[i] == vyushu[j]) {
					k = i;
					break;
				}
			}
			//std::cout << j << " " << k << std::endl;
			return  Integer_ + Decimal_.substr(0, j) + "(" + Decimal_.substr(j, k - j) +")";
		}
		else return Integer_ + Decimal_;

	}
};