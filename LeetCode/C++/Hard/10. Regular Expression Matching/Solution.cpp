class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0;
        int j=0;
        int count=0;
        int check=0;
        int see=0;
        int m=0;
        int n=0;
        int call=0;
        for(int k=0;k<s.size();k++){
            if(s[k]=='.' || s[k]=='*'){
                check=1;
                break;
            }
        }
        for(int l=0;l<p.size();l++){
            if(p[l]=='.'||p[l]=='*'){
                see=1;
                break;
            }
        }
        if(check==1||see==1){
            while(m<s.size()&&n<p.size()){
                 if(s[m]==p[n]){
                        call++;
                        m++;
                        n++;
                    }
                 else if(s[m]!=p[n]&& p[n]=='.'){
                        call++;
                        m++;
                        n++;
                 }
                 else if(s[m]!=p[n]&& p[n]=='*'){
                        while(m<s.size()&&n<p.size()){
                            call++;
                            m++;
                            n++;
                        }
                 }
            }
            if(call==s.size()&& call==p.size()){
                    return true;
                }
                else{
                    return false;
                }
        }
        else{
                while(i<s.size()&&j<p.size()){
                if(s[i]==p[j]){
                        count++;
                    }
                    i++;
                    j++;
                }
                if(count==s.size()&& count==p.size()){
                    return true;
                }
                else{
                    return false;
                }
        }
        
    }
};