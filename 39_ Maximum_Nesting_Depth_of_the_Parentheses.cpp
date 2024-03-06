// 39 1614. Maximum Nesting Depth of the Parentheses

// leetcode & gfg

// Example 1:
// Input: s = "(1+(2*3)+((8)/4))+1"
// Output: 3
// Explanation: Digit 8 is inside of 3 nested parentheses in the string.

// Example 2:
// Input: s = "(1)+((2))+(((3)))"
// Output: 3

class Solution {
public:
//   https://youtu.be/IOQi3aJFIaM
// Q39 in string notes
    int maxDepth(string s) {
         int current_max = 0; // current count 
    int max = 0; // overall maximum count 
    int n = s.length(); 
 
    // Traverse the input string 
    for (int i = 0; i < n; i++) 
    { 
        if (s[i] == '(') 
        { 
            current_max++; 
 
            // update max if required 
            if (current_max > max) 
                max = current_max; 
        } 
        else if (s[i] == ')') 
        { 
            if (current_max > 0) 
                current_max--; 
            else
                return -1; 
        } 
    } 
 
    // finally check for unbalanced string 
    if (current_max != 0) 
        return -1; 
 
    return max; 
    }
};
