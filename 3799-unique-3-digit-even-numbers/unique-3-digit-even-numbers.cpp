class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10);
        for(int i:digits){
            freq[i]++;
        }
        int cnt = 0;
        for(int h=1;h<10;h++){
            if(freq[h]==0)continue;
            freq[h]--;
            for(int t=0;t<10;t++){
                if(freq[t]==0)continue;
                freq[t]--;
                for(int i=0;i<=8;i+=2){
                    if(freq[i]>0)cnt++;
                }
                freq[t]++;
            }
            freq[h]++;
        }
        return cnt;        
    }
    
};