class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(vector<int>::size_type i = 0; i < nums.size(); ++i){
            if(q.size() < k){
                q.push(nums[i]);
            }
            else{
                if(q.top() < nums[i]){
                    q.pop();
                    q.push(nums[i]);
                }
            }
        }
        return q.top();
    }
};