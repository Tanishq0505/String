// Q35 1903. Largest Odd Number in String gfg & leetcode

// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string.

// Example 1:
// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

// Example 3:
// Input: num = "35427"
// Output: "35427"
// Explanation: "35427" is already an odd number.

// https://youtu.be/vkxUVdGgnhU

// Q35 in notes

class Solution {
public:
    string largestOddNumber(string num) {
        // https://youtu.be/vkxUVdGgnhU
        // Q35 in notes 
     
        int n = num.length();
        
        for(int i = n-1; i>=0; i--) {
            
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i+1);
            }
        }
        
        return "";
    }
};
