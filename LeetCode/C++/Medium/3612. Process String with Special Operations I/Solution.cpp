class Solution {
public:
    string processStr(string s) {
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
                    string temp;
                    for(int j=0;j<str.size()-1;j++){
                        temp+=str[j];
                    }
                    str=temp;
                }
            }
            else if(s[i]=='%'){
                int l=0;
                int k=str.size()-1;
                while(l<=k){
                    char t=str[k];
                    str[k]=str[l];
                    str[l]=t;
                    l++;
                    k--;
                }
            }

         }
         return str;
    }
};