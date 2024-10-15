class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i<st.size(); i++){
            char ch = s[i];


            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }

            else{
                if(!st.empty()) return false;

                    char topCh = st.top();
                     if ((ch == ')' && topCh == '(') || 
                    (ch == '}' && topCh == '{') || 
                    (ch == ']' && topCh == '[')) {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }   
        return st.empty();
    }
};