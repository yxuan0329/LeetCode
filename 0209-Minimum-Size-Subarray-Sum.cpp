class Solution {
private:
    bool isPossible(vector<int>& nums, int target, int mid){
        int p = 0, sum = 0, count = 0;
        for (int i=0; i<nums.size(); i++){
            if (count >= mid){
                sum -= nums[p];
                count --;
                p ++ ;
            }
            sum += nums[i];
            count ++;
            
            if (sum>= target) return true;
        }
        return false ;
    }
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 1, high = nums.size();
        int ans = 0 ;
        
        while(low <= high){
            int mid = (low+high)/2 ; // binary search
            cout << mid <<" ";
            if (isPossible(nums, target, mid)){
                ans = mid;
                high = mid-1;
            }else
                low = mid + 1;
        }
        if (ans ==0) return 0;
        return ans ;
    }
};
