class Solution {
public:
    int myAtoi(string s) {
        int res=0;
        int i=0;
        while(i<s.size() &&isspace(s[i])){
            i++;
        }
        if(i==s.size()){
            return 0;
        }
        int minus=0;
        if(s[i]=='-'){
            minus=1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        
        while(i<s.size()&&isdigit(s[i])){
       
            int val=s[i]-'0';
            if(minus){
                val=val*(-1);
            }
            
           
            if(res>(INT_MAX/10)){
                return INT_MAX;
            }
            else if(res==(INT_MAX/10) && val>7){
                 return INT_MAX;
            }
            if(res<(INT_MIN/10)){
                return INT_MIN;
            }
            else if(res==(INT_MIN/10) && val<-8){
                return INT_MIN;
            }
             res=res*10+val;
            i++;
            
        }
        if(i<s.size()&&!isdigit(s[i])){
            return res;
        }
        return res;
    }
        
};