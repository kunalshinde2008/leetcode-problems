class Solution {
public:
    void check(int n,vector<int> &nums,int index,vector<int> &ds,vector<vector<int>> &ans){
    if(index==n){
           ans.push_back(ds);
            return;
    }
        //pick
        ds.push_back(nums[index]);
        check(n,nums,index+1,ds,ans);
        ds.pop_back();

        //not pick
        check(n,nums,index+1,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     int n=nums.size(); //size
    int index=0;
    vector<int> ds;
    vector<vector<int>>ans;
    check(n,nums,0,ds,ans);
    return ans;
    
    }
};