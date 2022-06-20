class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        int n = intervals.size() ;
        vector<vector<int>> ans ;
        
        for (int i=0; i<n; i++){
            if (intervals[i][0] > newinterval[1]) { // insert a new interval
                ans.push_back(newinterval) ;
                for (int j=i; j<n; j++) // the rest of intervals stay unchanged
                    ans.push_back(intervals[j]);
                return ans ;
            }
            else if (newinterval[0] > intervals[i][1]){ // newinterval is inside the intervals
                ans.push_back(intervals[i]) ;
            }
            else{ // overlap interval, update the begin and end part
                newinterval[0] = min(intervals[i][0], newinterval[0]) ;
                newinterval[1] = max(intervals[i][1], newinterval[1]) ;
            }
        } // end of for-loop
        ans.push_back(newinterval) ;
        return ans;
    }
};
