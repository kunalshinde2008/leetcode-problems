class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int ld;
        int pr=1;
        int temp=n;
        while(n!=0){
        ld=n%10;
        pr*=ld;
        sum+=ld;
        n=n/10;
        }
        if(temp%(sum+pr)==0) return true;
        else return false;
        
    }
};