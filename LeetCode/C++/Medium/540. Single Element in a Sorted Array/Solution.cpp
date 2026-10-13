class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        int low=1;
        int high=nums.size()-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid-1]!=nums[mid]){
                return nums[mid];
            }
            else{
                if((mid%2!=0 && (nums[mid-1]==nums[mid])|| mid%2==0 && nums[mid+1]==nums[mid])){
                    low=mid+1;
                }
                
               
                else if((mid%2==0 && nums[mid-1]==nums[mid])|| mid%2!=0 && nums[mid]==nums[mid+1]){
                   high=mid-1;
                }
            }    
       }
       return 0;
    }
};