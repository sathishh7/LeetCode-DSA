class Solution {
public:
    int mySqrt(int x) {
      int largest=INT_MAX;
      int low=0;
      int high=x;
      while(low<=high){
        long long mid=(low+high)/2;
        if(mid*mid<=x){
            largest=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
      return largest;
    }
};