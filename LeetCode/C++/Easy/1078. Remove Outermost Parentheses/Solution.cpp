class Solution {
public:
    string removeOuterParentheses(string s) {
        string output;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(count ==0){
                if(s[i]=='('){
                    count++;
                    continue;
                }
            }
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            if(count!=0&&s[i]=='('){
                output.push_back('(');
            }
            if(count!=0&&s[i]==')'){
                output.push_back(')');
            }
        }
        return output;
    }

};