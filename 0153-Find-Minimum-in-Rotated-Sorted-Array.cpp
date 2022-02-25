class Solution {
public:
    int findMin(vector<int>& nums) {
        int head = 0, tail = nums.size()-1 ;
        while (head < tail){
            if (nums[head] < nums[tail]) return nums[head];
            else{
                int mid = (head+tail)/2;
                if (nums[head] <= nums[mid])
                    head = mid+1 ;
                else
                    tail = mid ;
            }
        }
        return nums[head];
    }
};
