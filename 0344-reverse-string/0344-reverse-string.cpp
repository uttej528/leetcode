class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> st;
        int top=(st.size())-1;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }

for(int i=-0;i<s.size();i++)
 {
    s[i]=st.top();
    st.pop();
 }
    }

    
};