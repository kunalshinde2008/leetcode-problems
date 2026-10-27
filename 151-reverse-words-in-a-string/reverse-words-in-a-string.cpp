class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]==' '){
                i--;
                continue;
            }
            while(i>=0 and s[i]!=' '){
                word.push_back(s[i]);
                i--;
            }
            reverse(word.begin(),word.end());
            if(!ans.empty()){
                ans.push_back(' ');
            }
            ans+=word;
            word="";
        }
        return ans ;
    }
};