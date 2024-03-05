// Remove Consecutive Characters gfg

// Given a string S. For each index i(1<=i<=N-1), erase it if s[i] is equal to s[i-1] in the string.

// Example 1:

// Input:
// S = aabb
// Output:  ab
// Explanation: 'a' at 2nd position is
// appearing 2nd time consecutively.
// Similiar explanation for b at
// 4th position.

// https://youtu.be/utn2wJ7VAns
// Q31 in string notes

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // https://youtu.be/utn2wJ7VAns
        // Q31 in string notes 
        // code here.
        string res = "";
        int n = S.length();
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && S[i] == S[i + 1]) {
                continue;
            } else {
                res += S[i];
            }
        }
        return res;
    }
};
