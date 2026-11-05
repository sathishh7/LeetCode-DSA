class Solution {
public:
    int countElements(vector<int>& nums) {
        int small;
        int great;
         int count=0;
        for(int i=0;i<nums.size();i++){
            small=0;
            great=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    small=1;
                }
                else if(nums[j]>nums[i]){
                    great=1;
                }
            }
            if(small==1 && great==1){
                count++;
            }
        }
        return count;
    }
};