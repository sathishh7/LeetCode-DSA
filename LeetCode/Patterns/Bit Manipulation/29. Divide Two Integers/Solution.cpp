class Solution {
public:
    int divide(int dividend, int divisor) {
       int quot=0;
       if(dividend >0 && divisor>0){
         while(dividend>=divisor){
            dividend-=divisor;
            quot++;
            }
            return quot;
       }
       else if(dividend >0 && divisor<0){
        divisor=-divisor;
         while(dividend>=divisor){
            dividend-=divisor;
            quot++;
            }
            quot=-quot;
            return quot;
       }
       else if(dividend <0 && divisor>0){
        dividend=-dividend;
         while(dividend>=divisor){
            dividend-=divisor;
            quot++;
            }
            quot=-quot;
       }
       else if(dividend <0 && divisor>0){
        dividend=-dividend;
         while(dividend>=divisor){
            dividend-=divisor;
            quot++;
            }
            quot=-quot;
            return quot;
       }
       else if(dividend <0 && divisor>0){
        divisor=-divisor;
        dividend=-dividend;
         while(dividend>=divisor){
            dividend-=divisor;
            quot++;
            }
            quot=-quot;
            return quot;
       }
       return quot;
    }
};