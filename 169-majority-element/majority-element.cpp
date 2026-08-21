class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi=1;
        int num=nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxi==0)num=nums[i];
            if(nums[i]==num){
                maxi++;
            }else{
                maxi--;
            }

        }
        return num;
    }
};