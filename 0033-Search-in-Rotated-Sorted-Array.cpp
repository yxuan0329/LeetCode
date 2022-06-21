class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        int low = 0, high = n-1 ;
        
        while (low<high ){
            int mid = low + (high-low) / 2 ;
            if (nums[mid] > nums[high])
                low = mid + 1 ;
            else
                high = mid ;
        }
        int curr = low ; // the position of the lowest value in list
        
        // reset 'low' and 'high'
        if (target == nums[curr])
            return curr ;
        if (curr == 0){ // general binary search
            low = 0 ;
            high = n - 1;
        }
        else if (target >= nums[0]){
            low = 0;
            high = curr ;
        }
        else if (target < nums[0]){
            low = curr ;
            high = n - 1 ;
        }
        
        // binary search
        while(low <= high){
            int m = low + (high - low) /2 ;
            if (nums[m] == target) return m ;
            else if (nums[m] > target) high = m - 1;
            else low = m + 1;
        }
        return -1; // target not found in the list
    }
};
// extension of binary search
