// Q34 1021. Remove Outermost Parentheses gfg & leetcode

// A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.
// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.
// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.
// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

// Example 1:
// Input: s = "(()())(())"
// Output: "()()()"
// Explanation:
// The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
// After removing outer parentheses of each part, this is "()()" + "()" = "()()()".


class Solution {
public:
    // https://youtu.be/iCAZZgD8kNw
    // Q34 in string notes
    // no need to use flag as explain in video as from explaination we
    // understood that
    // the only brackets we have to ignore are when count is 0 or count is 1
    // and bracket is'("

    string removeOuterParentheses(string s) {
        int count=0;
        string res="";
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == '(')
                count++;
            else if (s[i] == ')')
                count--;

            // the only brackets we have to ignore are when count is 0 or count
            // is 1 and bracket is'("
            if ((count == 1 && s[i] == '(') || count == 0)
                continue;
            else {
                res += s[i];
            }
        }
        return res;
    }
};
