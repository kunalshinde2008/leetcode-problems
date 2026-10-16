class Solution {
public:
    vector<vector<int>> ans;
        void check(vector<int>& candidates,int n,int index,int sum,vector<int> &ds,int target){
            if(sum>target) return;
            if(index==n){
                if(sum==target){
                    ans.push_back(ds);
                }
                return;
            }
            ds.push_back(candidates[index]);
            sum+=candidates[index];
            check(candidates,n,index,sum,ds,target);
            sum-=candidates[index];
            ds.pop_back();
            check(candidates,n,index+1,sum,ds,target);
            
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int sum=0;
        int index=0;
        vector<int>ds;
        check(candidates,n,0,0,ds,target);
        return ans;
        
    }
};