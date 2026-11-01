class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int area;
        int ht;
        int width;
        for(int i=0;i<height.size();i++){
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
           
        }
         return max_area;
    }
};