class Solution {
public:
    double myPow(double x, int n) {
        double l=x;
        if(n>0){
            for(int i=1;i<n;i++){
            x=l*x;
            }
        }
        else{
            n=-n;
            for(int i=1;i<n;i++){
            x=l*x;
            }
            x=1/x;
        }
        
        
        return x;
    }
};