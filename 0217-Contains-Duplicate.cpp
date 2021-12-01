// there are 2 ways below, using sort can have a better time complexity.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {      
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if (nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
    
    
    bool containsDuplicate(vector<int>& nums) {
        map <int, bool> hashMap;
        for(auto& num : nums){
            if (hashMap.find(num) != hashMap.end() )
                return true;
            else
                hashMap[num] = true;
        }
        return false;
    }
};
