// Q36 796. Rotate String leetcode

// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
// Example 1:
// Input: s = "abcde", goal = "cdeab"
// Output: true

// Example 2:
// Input: s = "abcde", goal = "abced"
// Output: false

// https://youtu.be/2aT0Gm7-CtE
// Q36 in string notes

class Solution {
public:
// https://youtu.be/2aT0Gm7-CtE
// Q36 in string notes 
    bool rotateString(string s, string goal) {
         if(s==goal)
        {
            return true;
        }

        queue<char>q1,q2;
        for(int i=0;i<s.size();i++)
        {
            q1.push(s[i]);
        }
        for(int i=0;i<goal.size();i++)
        {
            q2.push(goal[i]);
        }
        int k =goal.size()-1;
        while(k!=0)
        {
            char ch =q2.front();
            q2.pop();
            q2.push(ch);

            if(q1==q2)
            {
                return true;
            }
            k--;
        }
        return false;
    }
};
