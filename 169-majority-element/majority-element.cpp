class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        int maxi=INT_MIN;
        int res;
        for(auto&[idx,i]:mpp){
            if(maxi<i){
                maxi=i;
                res=idx;
            }
        }
        return res;
    }
};