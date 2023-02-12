https://leetcode.com/problems/valid-parentheses/description/
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()=='(' && s[i]==')'){
                st.pop();
            }
            else if(st.top()=='{' && s[i]=='}'){
                st.pop();
            }
            else if(st.top()=='[' && s[i]==']'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()==1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
