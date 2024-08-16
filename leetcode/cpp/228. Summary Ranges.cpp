class Solution {
public:
    string inttostr(int n){
        char s[10]="";
        sprintf(s, "%d", n);
        return string(s);
    }
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vs_;
        if(nums.size() == 0) return vs_;

        string t = inttostr(nums[0]);
        int st = nums[0];

        for(vector<int>::size_type  i = 1; i < nums.size(); ++i){
            if(nums[i - 1] + 1 == nums[i]){
                if(st + 1 == nums[i]) t += "->";
            }
            else {
                if(nums[i - 1] != st) t += inttostr(nums[i-1]);
                vs_.push_back(t);
                st = nums[i];
                t = inttostr(nums[i]);
            }
        }

        if(nums[nums.size() - 1] != st) t += inttostr(nums[nums.size()-1]);
        vs_.push_back(t);

        return vs_;

    }
};