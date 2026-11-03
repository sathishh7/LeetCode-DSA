class Solution {
public:

    double pw(double x, int n,double l){
       
       
       if(n%2==0){
       x=x*x;
       n/=2;
       return pw(x,n,l);
       }
       else{
        if(n==1){
            return x;
        }
        l=x;
        x=x*x;
        n/=2;
       return l*pw(x,n,l);

       }
    }
    double po(double x,long long m,double l){
            
            if(m%2==0){
                x=x*x;
                m/=2;
                return po(x,m,l);
            }
            else{
                if(m==1){
                    return 1/(x);
                }
                l=x;
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
            if(n==1){
                return x;
            }
        return pw(x,n,l);
        }
        
        else{
            m=n;
            m=-m;
            if(m==1){
                return 1/x;
            }
            return po(x,m,l);
        }

    }
};