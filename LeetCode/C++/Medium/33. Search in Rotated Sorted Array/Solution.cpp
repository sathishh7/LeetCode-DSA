class Solution {
public:

int search(vector<int> &nums, int k) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(k==nums[mid]){
                return mid;
            }
            
            if(nums[low]<=nums[mid]){
                if(k>=nums[low]  && k<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else if(nums[mid+1]<=nums[high]){
                if(k>nums[mid]  && k<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }

    

        
 

};