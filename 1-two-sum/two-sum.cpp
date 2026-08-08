class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
   unordered_map<int,int>mpp;

for(int i=0;i<nums.size();i++){
    int comp=k-nums[i];
    if(mpp.find(comp) != mpp.end()){
        return{mpp[comp],i};
    }
        mpp[nums[i]]=i;
}
return {};

    }
};