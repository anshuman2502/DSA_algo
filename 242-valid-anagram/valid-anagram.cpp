class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<int,int>mpp;
        for(char a:s){
            mpp[a-'a']++;
        }for(char a:t){
            mpp[a-'a']--;
        }
        for(auto a:mpp){
           if(a.second !=0)return false;
            
        }
        return true; 
    }
};