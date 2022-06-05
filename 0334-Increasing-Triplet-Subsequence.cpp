class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int max1 = INT_MAX, max2 = INT_MAX ; // record the lowest max number
        for (int x: nums){
            if (x<= max1)
                max1 = x ;
            else if (x<= max2)
                max2 = x;
            else
                return true ;
        }
        // no triplet increasement
        return false ;
    }
};
