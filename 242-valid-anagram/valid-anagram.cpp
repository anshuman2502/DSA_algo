class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>mpp(26,0);
        for(char a:s){
            mpp[a-'a']++;
        }for(char a:t){
            mpp[a-'a']--;
        }
        for(auto a:mpp){
           if(a !=0)return false;
            
        }
        return true; 
    }
};