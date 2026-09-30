class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> mpp_1;
        unordered_map<char,char> mpp_2;
        for(int i=0;i<s.size();i++){
               if(mpp_1.find(s[i]) != mpp_1.end()) {
               if(mpp_1[s[i]]!=t[i]) return false;
               }
               if(mpp_2.find(t[i]) != mpp_2.end()) {
               if(mpp_2[t[i]]!=s[i]) return false;
               }
               mpp_1[s[i]]=t[i];
               mpp_2[t[i]]=s[i];

            }
        return true;
    }
};