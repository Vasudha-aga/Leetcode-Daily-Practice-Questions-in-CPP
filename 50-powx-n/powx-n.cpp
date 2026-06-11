class Solution {
public:
    double myPow(double x, long long n) {
        if(x==0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        if(n<0) //negative n
        {
            return (double)1.0/myPow(x,-n);
        }
        if(n%2 == 1) //odd n
        {
            return x* myPow(x*x , (n-1)/2);
        }
        else //even n
        {
            return myPow(x*x , n/2);
        }
    }
};