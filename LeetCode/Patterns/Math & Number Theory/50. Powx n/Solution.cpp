class Solution {
public:
    
    double rec(double l,double x,long long y ){
        if(y==0){
            return 1;
        }
        if(y==1){
            return x;
        }
        if(y>1){
            x=x*l;
            y--;
            return rec(l,x,y);

        }
        return 0.0;
    }
    double myPow(double x, int n) {
        double l=x;
        double rev=0.0;
        long long m=n;
        if(m>0){
            return rec(l,x,m);
        }
        else{
             m=(-m);
            
            rev=rec(l,x,m);
            return (1/rev);
        }
    
        return 0;

    }
};