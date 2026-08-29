class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i=1;i<strs.size();i++){
            string temp="";
            for(int s=0;s<strs[i].size();s++){
                if(res[s]==strs[i][s]){
                    temp+=res[s];
                }else {
                    break;
                }
            }
            res = temp;
        }
        return res;        
    }
};