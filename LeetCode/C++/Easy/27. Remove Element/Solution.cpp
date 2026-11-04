class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int> n;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                count++;
                n.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<n.size();i++){
            nums.push_back(n[i]);
        }
        n.clear();
        return count;
    }
};