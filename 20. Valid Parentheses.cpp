class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n = s.size();
        for (int i = 0; i < n; i++) {
          if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
              stk.push(s[i]);
          } else if (s[i] == ')') {
              if (stk.size() == 0 || stk.top() != '(') 
                  return false;
              stk.pop();
          } else if (s[i] == ']') {
              if (stk.size() == 0 || stk.top() != '[')
                  return false;
              stk.pop();
          } else if (s[i] == '}') {
              if (stk.size() == 0 || stk.top() != '{')
                  return false;
              stk.pop();
          }
        }
        return stk.size() == 0;
    }
};
