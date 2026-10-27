class Solution {
public:
    int romanToInt(string s) {
        int one=1;
        int V=5;
        int x=10;
        int l=50;
        int c=100;
        int d=500;
        int m=1000;
        int res=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='I'&& i!=s.size()&&s[i+1]=='V'){
                res+=V-one;
                i++;
                continue;
            }
             if(s[i]=='I'&& i!=s.size()&&s[i+1]=='X'){
                res+=x-one;
                i++;
                continue;
            }
            if(s[i]=='I'){
                res+=one;
            }
            
            if(s[i]=='V'){
                res+=V;
            }
             if(s[i]=='X'&& i!=s.size()&&s[i+1]=='L'){
                res+=l-x;
                i++;
                continue;
            }
             if(s[i]=='X'&& i!=s.size()&&s[i+1]=='C'){
                res+=c-x;
                i++;
                continue;
            }
            if(s[i]=='X'){
                res+=x;
            }
            
            if(s[i]=='L'){
                res+=l;
            }
             if(s[i]=='C'&& i!=s.size()&&s[i+1]=='D'){
                res+=d-c;
                i++;
                continue;
            }
            if(s[i]=='C'&& i!=s.size()&&s[i+1]=='M'){
                res+=m-c;
                i++;
                continue;
            }
            if(s[i]=='C'){
                res+=c;
            }
           
            if(s[i]=='D'){
                res+=d;
            }
            if(s[i]=='M'){
                res+=m;
            }
            
        }
        return res;
    }
};