class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size() ;
        int maxLength = 0, index, left, right, mid, max_possible;
		    int leftest = 0, rightest = s.size()-1;
		    if (s.size() <2)    return s ;

		    for(mid=0; mid<s.size(); ){
			    if (s.size()-mid <= maxLength/2)
				    break ;	

			    left = right = mid;	
			    while(right<rightest && s[right]==s[right+1])
				    right ++ ;//duplicate char
			    mid = right +1 ;//skip duplicate iteration
		
			    //check if possible to reach max_length or not
			    max_possible = (maxLength-(right-left+1))/2;
			    if (max_possible>0 && s[left-max_possible] != s[right+max_possible])
				    continue ;
			
			    while( (left>0 && right<rightest) && s[right+1]==s[left-1]){//check LPS
				    left -- ;
				    right ++ ;
			    }
		
			    if (right-left+1 > maxLength){//find max
				    maxLength = right-left+1 ;
				    index = left ;
			    }
        }
        return s.substr( index, maxLength) ;
    }
};
