class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxNum = nums[0], sum = nums[0];
        for (int i=1; i<nums.size(); i++){
            if (nums[i] > sum+nums[i])
                sum = nums[i];
            else sum = nums[i]+sum ;
            maxNum = max(maxNum, sum);
        }
        return maxNum ;
    }
};
