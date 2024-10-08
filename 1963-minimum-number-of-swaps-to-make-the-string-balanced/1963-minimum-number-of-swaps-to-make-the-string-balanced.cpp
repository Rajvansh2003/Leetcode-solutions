class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int ans = 0;

        for(int i = 0; i<s.size(); i++){
            char ch = s[i];

            if(ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty()) st.pop();
                else{
                    ans++;
                }
            }
        }

        return (ans + 1)/2;
    }
};