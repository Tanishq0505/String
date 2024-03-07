// Q43 921. Minimum Add to Make Parentheses Valid leetcode

// A parentheses string is valid if and only if:
// It is the empty string,
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.

// Example 1:
// Input: s = "())"
// Output: 1

// // https://youtu.be/-IdQUjmo9Ow

//     // Q43 in string notes

class Solution {
public:
// https://youtu.be/-IdQUjmo9Ow
    // Q43 in string notes 
    int minAddToMakeValid(string s) {
        // Time complexity: O(n)
// Space complexity: O(n)
        stack<char> st;

        for(auto i: s){
            if(st.empty())
                st.push(i);
            else if(st.top() == '(' and i == ')')
                st.pop();
            else
                st.push(i);
        }
        return st.size();

    }
};
