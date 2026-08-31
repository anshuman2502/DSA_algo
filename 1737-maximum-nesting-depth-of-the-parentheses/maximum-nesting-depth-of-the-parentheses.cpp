class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int cnt=0;
        for(char a:s){
            if(a=='('){
                cnt++;
            }else if(a==')')cnt--;

            maxi = max(maxi,cnt);
        }        
        return maxi;
    }
};