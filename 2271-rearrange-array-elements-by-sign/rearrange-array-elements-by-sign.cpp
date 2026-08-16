class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>p;
      vector<int>n;
      for(auto i:nums){
        if(i>0)p.push_back(i);
        else n.push_back(i);
      }        
      int pos=0;int neg=0;
      for(int i=0;i<nums.size();i++){
        if(i%2==0){
            nums[i]=p[pos];
            pos++;
        }else {
            nums[i]=n[neg];
            neg++;
        }
      }
        return nums;
    }
};