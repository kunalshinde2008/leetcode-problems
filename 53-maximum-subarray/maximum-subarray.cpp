class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int length=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            length=max(sum,length);
            if(sum<0){
                 sum=0;}
            }
        return length;
        
    }
};