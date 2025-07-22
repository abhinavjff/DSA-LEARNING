// Problem: Valid Parentheses
// Leetcode: https://leetcode.com/problems/valid-parentheses/

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();  //WILL RETURN TRUE WHENEVER THERE IS AN EMPTY STACK THAT MEANS THE VALID PARENTESIS  ELSE INVALID ->FALSE 
        
    }
};
