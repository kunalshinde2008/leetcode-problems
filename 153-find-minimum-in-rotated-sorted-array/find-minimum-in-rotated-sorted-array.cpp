class Solution {
public:
    int findMin(vector<int>& nums) {
         int m=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[low]<=nums[mid]){
                m=min(m,nums[low]);
                low=mid+1;
            }
            else{
                high=mid-1;
                m=min(m,nums[mid]);
            }
        }
        return m;
        
    }
};