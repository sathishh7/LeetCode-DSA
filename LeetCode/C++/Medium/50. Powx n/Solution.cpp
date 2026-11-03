class Solution {
public:
    double po(double x, long long m,double l){
        if(m==0){
        return 1/x;
       }
       x=l*x;
       m--;
       return po(x,m,l);
    }
    double pw(double x, int n,double l){
        if(n==0){
        return x;
       }
       x=l*x;
       n--;
       return pw(x,n,l);
    }

    double myPow(double x, int n) {
        double l=x;
        if(n<0){
            long long m=n;
            m=-m;
            m--;
            return po(x,m,l);
        }
        if(n==0){
            return 1;
        }
        
        n=n-1;
        return pw(x,n,l);
    }
};