// 696. Count Binary Substrings

// Given a binary string s, return the number of non-empty substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.

// Substrings that occur multiple times are counted the number of times they occur.

// Example 1:

// Input: s = "00110011"
// Output: 6
// Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".
// Notice that some of these substrings repeat and are counted the number of times they occur.
// Also, "00110011" is not a valid substring because all the 0's (and 1's) are not grouped together.


class Solution {
public:
// https://youtu.be/OJWKzff4Ivg
// Q17 in notes 
    int countBinarySubstrings(string s) {
        
        // previous continuous occurrence, current continuous occurrence
        int pre_cont_occ=0, cur_cont_occ= 1;
        
        // counter for binary substrings with equal 0s and 1s
        int counter = 0;
        
		// scan each character pair in s
        for( int idx = 1 ; idx < s.length() ; idx++ ){
            
            if( s[idx] == s[idx-1] ){
                
                // update current continuous occurrence
                cur_cont_occ += 1;
            
            }else{
                // update counter of binary substrings between prevous character group and current character group
                counter += min(pre_cont_occ, cur_cont_occ);

                // update previous as current's continuous occurrence
                pre_cont_occ = cur_cont_occ;
                
                // reset current continuous occurrence to 1
                cur_cont_occ = 1;
            }
        }
        // update for last time
        counter += min(pre_cont_occ, cur_cont_occ);
        
        return counter;
    }
};
