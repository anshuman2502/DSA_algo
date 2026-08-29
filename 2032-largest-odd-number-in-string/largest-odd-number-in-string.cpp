class Solution {
public:
    string largestOddNumber(string num) {
        string res ="";
        for(int i=num.size()-1;i>=0;i--){
            
            if((num[i]-'0')%2==1){
                while(i>=0){
                    res+=num[i];
                    i--;
                }
            }
        }
        reverse(res.begin(),res.end());
        return res;        
    }
};