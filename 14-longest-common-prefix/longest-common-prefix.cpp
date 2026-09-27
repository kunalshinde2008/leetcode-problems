class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            string current;
            string temp;
            string prefix=strs[0];
            for(int i=1;i<=strs.size()-1;i++){
                current=strs[i];
                int j=0;
                for(;j<prefix.size() and j<current.size();j++){
                    if(prefix[j]!=current[j]){
                        break;
                        }

                }
                        prefix=prefix.substr(0,j);
            }
            return prefix;

        
    }
};