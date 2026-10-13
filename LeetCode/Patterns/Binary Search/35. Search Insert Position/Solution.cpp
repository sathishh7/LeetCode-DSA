class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lower_bound=nums.size();
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid]){
               
               
               return mid;
            }
            else if(target<nums[mid]){
                lower_bound=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lower_bound;
    }
};