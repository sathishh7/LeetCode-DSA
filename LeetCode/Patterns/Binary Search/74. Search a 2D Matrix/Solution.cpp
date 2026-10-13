class Solution {
public:
    

    bool searchMatrix(vector<vector<int>> &matrix, int target){
       int low=0;
       int high=(matrix.size()*matrix[0].size())-1;
        while(low<=high){
            int mid=(low+high)/2;

            
                int n1=mid/matrix[0].size();
                int n2=mid%matrix[0].size();
            
            if(target==matrix[n1][n2]){
                return true;
            }
            if(target<matrix[n1][n2]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }   
        return false;
    }
};