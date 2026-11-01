class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> nums;
        int i=0;
        int j=0;

        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }
            else{
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            nums.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            nums.push_back(nums2[j]);
            j++;
        }
        int low=0;
        int high=nums.size()-1;
        int mid=(low+high)/2;
        int mid1=mid+1;
        if(nums.size()%2==0){
            double avg=(nums[mid]+nums[mid1])/2;
            return avg;
        }
        return nums[mid];
        
        
    }
};