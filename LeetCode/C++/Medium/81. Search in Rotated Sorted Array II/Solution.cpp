class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
      int low=0;
      int high=nums.size()-1;
      bool check=false;
      while(low<=high)
      {
      int mid=(low+high)/2;
      if(target==nums[mid]){
          check=true;
          return check;
      }
      if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
          high--;
          low++;
          continue;
      }
      if(nums[low]<=nums[mid]){
          if(target>=nums[low]&& target<nums[mid]){
             high=mid-1; 
          }
          else{
              low=mid+1;
          }
      }
      else if(nums[mid+1]<=nums[high]){
          if(target>nums[mid]&&target<=nums[high]){
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
    }
    return check;
    
}
    
};