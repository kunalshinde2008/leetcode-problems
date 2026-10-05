class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> mpp;
        int maxi=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mpp.insert(nums[i]);
        }
        for(auto it:mpp){
            if(mpp.find(it-1)==mpp.end()){
                count=1;
                int x=it;
            while(mpp.find(x+1) != mpp.end()){
                count++;
                x++;
            }
            }
            maxi=max(maxi,count);
        }
return maxi;
        
    }
};