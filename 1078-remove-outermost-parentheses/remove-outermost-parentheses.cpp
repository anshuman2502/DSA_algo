class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string res = "";
        for(char a:s){
            if(a=='('){
                if(cnt>=1){
                    res+='(';
                    cnt++;
                }else cnt++;
            }else {
                if(cnt>1){
                    res+=')';
                    cnt--;
                }else cnt--;
            }
        }
        return res;        
    }
};