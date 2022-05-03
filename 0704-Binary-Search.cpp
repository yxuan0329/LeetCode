class Solution {
public:
    int search(vector<int>& nums, int target) {      
        return binarySearch(nums, 0, nums.size()-1, target);
    }
    int binarySearch(vector<int>& nums, int low, int high, int target){
        int mid = (low+high)/2 ;
        if (low <= high) {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                return binarySearch(nums, low, mid-1, target);
            else if (nums[mid] < target)
                return binarySearch(nums, mid+1, high, target) ;
        }
        return -1 ;
    }
};
