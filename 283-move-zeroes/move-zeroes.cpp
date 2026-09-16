class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                ans[i]=nums[j];
                i++;
            }
        }        
        nums = ans;
    }
};