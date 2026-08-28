class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string temp="";
        string ans="";
    reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=' ')temp+=s[i];
            else if(s[i]==' ' && !temp.empty()){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp="";
                ans+=' ';
            }
            if(i==n-1){
              if(!temp.empty()){
                 reverse(temp.begin(),temp.end());
                ans+=temp; 
                ans+=' ';
              }
            }
            }  
           return ans.substr(0,ans.size()-1);  
    }
};