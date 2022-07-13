class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxStep = nums[0],  n = nums.size(), curr = 0;
        for (curr = 0; curr < n && curr <= maxStep ; curr++)
            maxStep = max(maxStep, curr+nums[curr]) ;
        return curr == n ;
    }
};
