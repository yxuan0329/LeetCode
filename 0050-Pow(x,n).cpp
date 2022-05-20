class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        if (x==1)
            return x;
        if (n==0)
            return res;
        res = myPow(x, n/2);
        if (n%2 ==0)
            return res * res ;
        else{
            if (n<0)
                return 1/x*res*res ;
            else
                return x* res*res;
        }
    }
};
