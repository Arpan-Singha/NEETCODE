class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (int i = 0; i < s.size(); i++) {
            // 1. If it is an opening bracket, always push it onto the stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } 
            // 2. If it is a closing bracket
            else {
                // If the stack is empty, we have a closing bracket with no opening bracket
                if (st.empty()) {
                    return false;
                }
                
                // If it matches the top of the stack, pop it
                if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == '}' && st.top() == '{') ||
                    (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                } 
                // If it doesn't match the top of the stack, the string is invalid
                else {
                    return false;
                }
            }
        }
        
        // 3. If the stack is empty at the end, all brackets were perfectly matched
        return st.empty();
    }
};