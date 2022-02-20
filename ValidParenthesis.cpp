class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char top = st.empty()?'!':st.top(); // Dummy char if empty else top char
            if(top == '(' && s[i] == ')') st.pop();
            else if(top == '[' && s[i] == ']') st.pop();
            else if(top == '{' && s[i] == '}') st.pop();
            else st.push(s[i]);
        }
        return st.empty();
    }
};