class Solution {
public:
    int divide(int dividend, int divisor) {
        int div=0;
        if(dividend<0 && divisor>0){
            dividend=-dividend;
            div=dividend/divisor;
            div=-div;
        }
        else if (dividend>0 && divisor>0){
            div=dividend/divisor;
            div=dividend/divisor;
        }
         else if (dividend>0 && divisor<0){
            divisor=-divisor;
            div=dividend/divisor;
            div=-div;
        }
        else if(dividend<0 && divisor<0){
            divisor=-divisor;
            div=dividend/divisor;
            div=dividend/divisor;
        }
        return div;
    }
};