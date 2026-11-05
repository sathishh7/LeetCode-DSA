class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> n;
        int low=0;
        int high=nums.size()-1;
        int lower=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[mid]>=target){
                if(lower>mid){
                    lower=mid;
                }                                       
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        int l=0;
        int h=nums.size()-1;
        int upper=0;
        while(l<=h){
            int m=(l+h)/2;
            
            if(nums[m]<=target){
                if(m>upper){
                    upper=m;
                }                                       
            l=m+1;
            }
            else {
                h=m-1;
            }
        }
        for(int i=lower;i<=upper;i++){
            if(nums[i]==target){
                n.push_back(i);
            }
            
        }
        return n;
    }
};