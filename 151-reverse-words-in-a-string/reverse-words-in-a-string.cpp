class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        string temp = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    st.push_back(temp);
                    temp = "";
                }
            }
        }
        
        // Push final remaining word after loop ends
        if (!temp.empty()) {
            st.push_back(temp);
        }
        
        string res = "";
        reverse(st.begin(), st.end());
        for (auto i : st) {
            res += i;
            res += ' ';
        }
        
        if (!res.empty()) {
            res.pop_back(); // Clean, safe way to remove trailing space
        }
        
        return res;
    }
};