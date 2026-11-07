class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        while(n>0){
            long long t=n%10;
            if(t==0){
                n/=10;
                continue;
            }
            x=x*10+t;
            n/=10;
        }
        long long rev=0;
        long long sum=0;
        while(x>0){
            long long m=x%10;
            sum+=m;
            rev=rev*10+m;
            x/=10;
        } 
        
        
        
        return sum*rev;
        
    }
};