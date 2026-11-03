class Solution {
public:

    double pw(double x, int n,double l){
        if(n==0){
        return x;
       }
       
       if(n%2==0){
       x=x*x;
       n/=2;
       return pw(x,n,l);
       }
       else{
        if(n==1){
            return l*x;
        }
        n=n-1;
        x=x*x;
        n/=2;
       return l*pw(x,n,l);

       }
    }
    double po(double x,long long m,double l){
            if(m==0){
                return 1/x;
            }
            if(m%2==0){
                x=x*x;
                m/=2;
                return po(x,m,l);
            }
            else{
                if(m==1){
                    return 1/(l*x);
                }
                m-=1;
                x*=x;
                m/=2;
                return (1/l)*po(x,m,l);
            }
    }

    double myPow(double x, int n) {
        
        if(n==0){
            return 1;
        }
        
        double l=x;
        long long m;
        if(n>0){
            n=n-1;
        return pw(x,n,l);
        }
        
        else{
            m=n;
            m=-m;
            m-=1;
            return po(x,m,l);
        }

    }
};