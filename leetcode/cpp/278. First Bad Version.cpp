// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n , ans ;
        while(l <= r){
            int mid = l +  (r - l + 1) / 2;
            if(!isBadVersion(mid)){
                l = mid + 1;
            }
            else {
                r = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};