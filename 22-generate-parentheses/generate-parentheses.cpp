class Solution {
public:
    void check(string &current,int n, vector<string> &ans,int open,int close){
        if(current.length()==2*n){
                ans.push_back(current);
            return;
        }
        if(open<n){
        current.push_back('(');
        check(current,n,ans,open+1,close);
        current.pop_back();
        }
        if(close<open){
        current.push_back(')');
        check(current,n,ans,open,close+1);
        current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
      string current="";
      int open=0,close=0;
      check(current,n,ans,open,close);
      return ans;
        
        
    }
};