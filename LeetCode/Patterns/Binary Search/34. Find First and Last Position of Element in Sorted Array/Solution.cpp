class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
    int floor_index=-1;
    int ciel_index=-1;
    vector<int> store;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>target){
            high=mid-1;
        }
        else{
            if(floor_index<mid){
                floor_index=mid;
            }
            low=mid+1;
        }
    }
    
    int low_1=0;
    int high_1=nums.size()-1;
    while(low_1<=high_1){
        int mid_1=(low_1+high_1)/2;
        if(nums[mid_1]<target){
            low_1=mid_1+1;
        }
        else{
            if(ciel_index==-1||ciel_index>mid_1){
                ciel_index=mid_1;
            }
            high_1=mid_1-1;
        }
    }
    if(ciel_index!=-1&&nums[ciel_index]==target){
        store.push_back(ciel_index);
    }
    else{
        store.push_back(-1);
    }
    if(floor_index!=-1 &&nums[floor_index]==target){
        store.push_back(floor_index);
    }
    else{
        store.push_back(-1);
    }
    return store;
}
};