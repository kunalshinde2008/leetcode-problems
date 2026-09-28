class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
            for(int i=0;i<s.size();i++){
                if(s==goal) return true;
                char first=s[0];
                for(int j=0;j<s.size()-1;j++){
                    s[j]=s[j+1];
            }
            s[s.size()-1]=first;
            }
          return false;
        
    }
};