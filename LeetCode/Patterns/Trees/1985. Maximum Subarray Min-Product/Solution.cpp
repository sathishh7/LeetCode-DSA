class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        
        
        long long max=0;
        long long sum;
        long long pr;
        for(int i=0;i<nums.size();i++){
            sum=0;
            int min_sub=INT_MAX;
            pr=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(min_sub>nums[j]){
                    min_sub=nums[j];
                }
                pr=sum*min_sub;
                if(pr>max){
                    max=pr;
                }

            }  
        }
        return max;
    }
};