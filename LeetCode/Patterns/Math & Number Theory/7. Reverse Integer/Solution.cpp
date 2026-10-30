class Solution {
public:
    int reverse(int x) {
        
        int n;
        int rev=0;
        if(x>0){
            while(x>0) {
            n=x%10;
            if((rev>INT_MAX/10)||(rev==INT_MAX/10 && n>7)){
                return 0;
            }
            rev=(rev*10)+n;
            x=x/10;
            }
        }
        else if(x==INT_MIN){
            return 0;
        }
        else{
            int m=-x;
            while(m>0) {
            n=m%10;
            if (rev > 214748364 ||
                (rev == 214748364 && n > 8)) {
                return 0;
            }
            rev=(rev*10)+n;
            m=m/10;
            }
            rev=-rev;
        }
        return rev;
    }
};