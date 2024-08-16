class Solution {
public:
    int calc(int a, char x, int b){
        if(x == '+') return a + b;
        if(x == '-') return a - b;
        if(x == '*') return a * b;
    }

    vector<int> diffWaysToCompute(string input) {
        vector<int> v;
        bool flg = true;
        for(string::size_type i = 0; i < input.size(); ++i){
            if(input[i] == '+' || input[i] == '-' || input[i] == '*'){
                vector<int> left, right;
                left = diffWaysToCompute(input.substr(0,i));
                right = diffWaysToCompute(input.substr(i+1, input.size() - i - 1));
                flg = false;
                for(vector<int>::size_type j = 0; j < left.size(); ++j){
                    for(vector<int>::size_type k = 0; k < right.size(); ++k){
                        v.push_back(calc(left[j], input[i], right[k]));
                    }
                }
            }
        }
        if(flg){
            v.push_back(atoi(input.c_str()));
        }
        return v;
    }
};