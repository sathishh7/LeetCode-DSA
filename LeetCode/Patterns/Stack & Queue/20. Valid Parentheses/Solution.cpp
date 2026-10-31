class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(st.size()==0 &&s.size()!=0){
            st.push(s[0]);
        }
        for(int i=1;i<s.size();i++){
            if(st.size()!=0&& st.top()=='(' && s[i]==')'||st.size()!=0&& st.top()=='[' && s[i]==']'||st.size()!=0&& st.top()=='{' && s[i]=='}'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        
        }
        if(st.size()==0){
            return true;

        }
        return false;
    }
};