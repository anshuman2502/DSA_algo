class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ts=INT_MIN;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            curr +=nums[i];
            ts = max(curr,ts);
            if(curr<0)curr=0;
        }
        return ts;
    }
};