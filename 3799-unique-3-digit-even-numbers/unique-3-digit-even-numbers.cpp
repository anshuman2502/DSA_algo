class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int>freq;
        int n = digits.size();
        for(int h=0;h<n;h++){
            if(digits[h]==0)continue;
            for(int t=0 ; t<n ; t++){
                if(t==h)continue;
                for(int i=0;i<n;i++){
                    if(i==h || i==t)continue;
                    if(digits[i]%2 ==1)continue;

                    int num = digits[h]*100+digits[t]*10+digits[i];
                    freq.insert(num);
                }
            }
        }
        return freq.size();
    }   
};