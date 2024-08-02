
class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                temp.push(s[i]);
            } else {
                if(temp.empty()) {
                    return false; // No matching opening bracket
                }
                char val = temp.top();
                if((s[i] == ')' && val == '(') || 
                   (s[i] == '}' && val == '{') || 
                   (s[i] == ']' && val == '[')) {
                    temp.pop();
                } else {
                    return false; // Mismatched opening bracket
                }
            }
        }
        
        return temp.empty(); // Stack should be empty for valid string
    }
};
