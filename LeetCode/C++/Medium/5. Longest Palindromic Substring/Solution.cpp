class Solution {
public:
    string reverse(string s){
        int i=0;
        int j=s.size()-1;
        while(i<j){
            char temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            i++;
            j--;

        }
        return s;
    }
    string longestPalindrome(string s) {
        string max_s;
        for(int i=0;i<s.size();i++){
            string str;
            for(int j=i;j<s.size();j++){
                str.push_back(s[j]);
                string rev=reverse(str);
                if(str==rev){
                    if((max_s.size())<(str.size())){
                        max_s=str;
                    }
                }
        
            }
        }
        return max_s;
    }
};