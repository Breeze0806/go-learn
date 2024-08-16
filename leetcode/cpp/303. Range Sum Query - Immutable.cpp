class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int> &nums) {
        sum.push_back(0);
        for(vector<int>::size_type i = 0; i< nums.size(); ++i){
            int m = sum[i] + nums[i];
            sum.push_back(m);
        }
    }

    int sumRange(int i, int j) {
        return sum[j + 1] - sum[i];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);