class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        if (nums.size() < 3) // base case 1
            return {} ;
        if (nums[0] > 0) // base case 2
            return {} ;
        
        unordered_map<int, int> hashMap ;
        for (int i=0; i<nums.size(); i++) { // hashing
            hashMap[nums[i]] = i ;
        }
        vector<vector<int>> answer ;
        for (int i=0; i<nums.size(); i++){ // traverse array
            if (nums[i] > 0)
                break;
            for (int j=i+1; j<nums.size(); ++j){
                int required = -1 * (nums[i]+ nums[j]) ;
                if (hashMap.count(required) && hashMap.find(required)->second > j){
                    answer.push_back({nums[i], nums[j], required}) ;
                }
                j = hashMap.find(nums[j])->second;
            }
            i = hashMap.find(nums[i])->second;
        }
        return answer; 
    }
};
