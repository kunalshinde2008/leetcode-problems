class Solution {
public:
    bool checkPerfectNumber(int num) {
        int k = 1;
        if(num <= 1) return false;

        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                k += i;
            }
        }

        return k == num;
        
    }
};