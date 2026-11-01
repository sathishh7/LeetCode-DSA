class Solution {
public:
    bool isPalindrome(int x) {
        int n=0;
        int rev=0;
        int pal=x;
        if(x<0){
            return false;
           /* int m=-x;
            while(m>0){
            n=m%10;
            rev=(rev*10)+n;
            m/=10;
        }
        rev=-rev;
        */
        }
        while(x>0){
            n=x%10;
            if(rev>INT_MAX/10 || rev==INT_MAX/10 && n>7){
                return false;
            }
            rev=(rev*10)+n;
            x/=10;
        }
        
        if(rev==pal){
            return true;
        }
        return false;
    }
};