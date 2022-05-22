class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k == 0)
            return;
        int n = nums.size() ;
        vector<int> new_nums(n) ;
        for (int i=0; i<n; i++){
            new_nums[i] = nums[i] ;
        }
        for (int i=0; i<n; i++)
            nums[(i+k)%n] = new_nums[i] ;
    }
};

/* another solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if (k%size==0)return ;
        k = k%size;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

*/
