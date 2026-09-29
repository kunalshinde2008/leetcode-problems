class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
			int arr[26]={0};
            for(int i=0;i<s.size();i++){
                arr[s[i]-'a']++;
                arr[t[i]-'a']--;}
                int j=25;
            while(j>=0){
                if(arr[j]!=0) return false;
            j--;
            }

            return true;
        
    }
};