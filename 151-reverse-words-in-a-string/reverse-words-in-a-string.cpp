class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
    reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string temp="";
          while(i<n && s[i]!=' '){
            temp+=s[i];
            i++;
          }
          if(!temp.empty()){
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=' ';            
          }
            } 
           return ans.substr(0,ans.size()-1);  
    }
};