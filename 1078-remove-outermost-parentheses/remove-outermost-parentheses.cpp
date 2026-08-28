class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string res = "";
        for(char c:s){
            if(c == '('){
                cnt++;
            if(cnt>1)res +='(';
        }else if(c==')'){
            cnt--;
            if(cnt>0)res+=')';
        }
        }        
        return res;
    }
};