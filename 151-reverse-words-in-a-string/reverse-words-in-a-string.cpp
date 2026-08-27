class Solution {
public:
    string reverseWords(string s) {
        vector <string> st;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')temp+=s[i];
            if(s[i]==' '){
                if(!temp.empty()){
                    st.push_back(temp);
                    temp="";
                }else continue;
            }
            if(i==s.size()-1 && !temp.empty())st.push_back(temp);
        }
        
        string res = "";
        reverse(st.begin(),st.end());
        for(auto i:st){
            res +=i;
            res+=' ';
        }
        res.erase(res.size()-1);
        return res;

    }
};