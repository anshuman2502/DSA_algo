class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxi =INT_MIN;
       int curr=0;
     for(int i=0;i<nums.size();i++){
        int j=i;
        while(j<nums.size() && nums[j]==1){
            j++;
        }
        maxi = max(maxi,j-i);
        i=j;
     }
     return maxi;
    }
};