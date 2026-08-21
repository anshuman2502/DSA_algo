class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int m=0;
        int h=nums.size()-1;
        while(m<=h){
            if(nums[m]==2){
                  swap(nums[h],nums[m]);
                h--;
            }else if(nums[m]==1){
               m++;
            }else{
               swap(nums[m],nums[l]);
                l++;
                m++;
            }
        }
    }
};

// swap(nums[m],nums[l]);
//                 l++;
//                 m++;