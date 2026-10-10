class Solution {
public:
    double check(double x, long long n){
        double ans=1.0;
        if(n==0){
            return 1.0;
        }
        if(n%2==1){
        return x*check(x,n-1);
        }
        else{
            return check(x*x,n/2);
        }
    }
    double myPow(double x, int n) {
        long long power=n;
        if(n<0) {
            power=-power;
            return 1.0/check(x,power);
        }
        return check(x,power);

    }
};