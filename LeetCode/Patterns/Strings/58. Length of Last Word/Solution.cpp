class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int k=s.size()-1;
        int sp=0;
        while(k>=0){
            if(s[k]==' '){
                sp++;
                k--;
            }
            else{
                break;
            }
        }
        for(int j=s.size()-1-sp;j>=0;j--){
            if(s[j]==' '){
                break;
            }
            else{
                count++;
            }
        }
        return count;
    }
};