class Solution {
public:
    string largestOddNumber(string num) {
         string temp;
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0 and num[i]!=0){
                temp=num.substr(0,i+1);
                break;
            }
        }
        int j = 0;

while(j < temp.size() && temp[j] == '0') {
    j++;
}

temp = temp.substr(j);
        return temp;
        
    }
};