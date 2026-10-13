class Solution {
public:
    bool check(vector<int>& nums){
            int i=0;
           int count=0;
            while(i<=nums.size()-2 && nums[i]<=nums[i+1]){
                i++;
                count++;;
            }
            if(count==nums.size()-1){
                return true;
            }
            else{
                return false;
            }
            
    		}
};