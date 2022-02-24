class Solution {
public:
    vector <string> ans ;
    vector<string> generateParenthesis(int n) {
        add( "", n ,0 ) ;
        return ans ;
    }
    void add( string str, int left, int right){
        if (left==0 && right==0){ // no more remain parentheses
            ans.push_back(str) ;
            return ;
        }
        if (right > 0) add(str+')', left, right -1) ;
        if (left > 0) add(str+'(', left-1, right+1 ) ;
    }
};	
	
