class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        
        int dist=0;
        for(int i=0;i<arr1.size();i++){
            int k=0;
            int low=0;
            int high=arr2.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if((arr2[mid]>=(arr1[i]-d))&&(arr2[mid]<=(arr1[i]+d))){
                    
                    break;
                }
                else if(arr2[mid]<(arr1[i]-d)) {
                        k+=(mid-low+1);
                        low=mid+1;
                        
                }
                else if(arr2[mid]>(arr1[i]+d)){
                        k+=(high-mid+1);
                        high=mid-1;
                }

            }
            if(k==arr2.size()){
                dist++;
            }
            
        }
        return dist;
      
    }
};