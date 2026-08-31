class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string news = s+s;
        return news.find(goal)!=string::npos;
        
        
    }
};