class Solution {
public:
    char processStr(string s, long long k) {
        string str;
         for(int i=0;i<s.size();i++){
            if('a'<=s[i]&& s[i]<='z'){
                str.push_back(s[i]);
            }
            else if(s[i]=='#'){
                str+=str;
            }
            else if(s[i]=='*'){
                if(str.size()!=0){
                   str.pop_back();
                }
            }
            else if(s[i]=='%'){
                if(str.size()!=0){
                long long l=0;
                long long k=str.size()-1;
                    while(l<=k){
                    char t=str[k];
                    str[k]=str[l];
                    str[l]=t;
                    l++;
                    k--;
                 }
                }
            }

         }
         char c;
         long long check=pow(10,15);
         if(str.size()==0){
            c='.';
            return c;
         }
         if(str.size()<=check){
            c=str[k];
         }
         else{
            c='.';
         }
         return c;
    }
};