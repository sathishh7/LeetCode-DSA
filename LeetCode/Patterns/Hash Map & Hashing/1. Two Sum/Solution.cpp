class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                    int verify=nums[i]+nums[j];
                    if(verify==target){
                    result.push_back(i);
                    result.push_back(j);
                    
            }
            }
        }
        /*int i=0;
        int j=nums.size()-1;
        vector<int> result;
        while(i<j){
            int verify=nums[i]+nums[j];
            if(verify==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            if(verify>target && nums[j]>nums[i]){
                i++;
                continue;
            }
            else if(verify>target && nums[j]<nums[i]){
                j--;
                continue;
            }
        }
        return result;
        */
     return result;
    }
};