class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int tmp, count =0 ;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]){
                tmp = nums[i] ;
                nums[i] = 0;
                nums[count++] = tmp ;                
            }
        }
    }
};
