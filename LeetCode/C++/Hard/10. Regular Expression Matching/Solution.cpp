class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0;
        int j=0;
        int count=0;
        while(i<s.size()&&j<p.size()){
            if(s[i]==s[j]){
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
};