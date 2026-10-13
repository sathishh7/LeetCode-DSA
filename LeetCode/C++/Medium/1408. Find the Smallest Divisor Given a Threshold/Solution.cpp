class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       int max=0;
       for(int i=0;i<nums.size();i++){
        if(max<nums[i]){
            max=nums[i];
        }
       }
       
       int low=1;
       int high=max;
       int min_i=max;
       while(low<=high){
        int mid=(low+high)/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            double n1=nums[i]/(double)mid;
            sum+=ceil(n1);
       }
       if(sum<=threshold){
        if(min_i>mid){
            min_i=mid;
        }
        high=mid-1;
       }
       else{
       low=mid+1;
       }
    }
    return min_i;
}
    
};