class Solution {
public:
    
    double myPow(double x, int n) {
        //your code goes here
        double l=x;
        double rev=0.0;
        if(n>0){
            for(int i=1;i<n;i++){
               x*=l;

            }

        }
        else{
            int m=(n*(-1));
            for(int i=1;i<m;i++){
               x*=l;

            }
            rev=(1/x);
            return rev;


        }
        return x;
    }
};