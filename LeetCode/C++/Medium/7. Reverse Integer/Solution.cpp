class Solution {
public:
    int reverse(int x) {
        int n;
        int rev=0;
        if(x>0){
            while(x>0) {
            n=x%10;
            rev=(rev*10)+n;
            x=x/10;
            }
        }
        else{
            long long m=-x;
             while(m>0) {
            n=m%10;
            rev=(rev*10)+n;
            m=m/10;
            }
            rev=-rev;
        }
        return rev;
    }
};