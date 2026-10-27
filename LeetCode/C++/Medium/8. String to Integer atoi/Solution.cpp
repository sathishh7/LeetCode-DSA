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
        while(i<s.size()&&isdigit(s[i])){
       
            int val=s[i]-'0';
            if(minus){
                val=val*(-1);
            }
            res=res*10+val;
            i++;
            
        }
        if(!isdigit(s[i])){
            return res;
        }
        return res;
    }
        
};