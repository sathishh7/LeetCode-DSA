class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int area=0;
        int ht=0;
        int width=0;
        int i=0;
        int j=height.size()-1;
        while(i<=j){
                width=j-i;
                if(height[j]>height[i]){
                    ht=height[i];
                }
                else{
                    ht=height[j];
                }
                area=width*ht;
                if(area>max_area){
                    max_area=area;
                }
                if(height[i]<=height[j]){
                    i++;
                }
                else{
                    j--;
                }
        }
        /*for(int i=0;i<height.size();i++){
            area=0;
            ht=0;
            width=0;
            for(int j=i+1;j<height.size();j++){
                width=j-i;
                if(height[j]>height[i]){
                    ht=height[i];
                }
                else{
                    ht=height[j];
                }
                area=width*ht;
                if(area>max_area){
                    max_area=area;
                }
            }
           
        }*/
         return max_area;
    }
};