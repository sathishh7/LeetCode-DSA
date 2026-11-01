class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            string str;
            for(int j=i;j<haystack.size();j++){
                str.push_back(haystack[j]);
                if(str==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};