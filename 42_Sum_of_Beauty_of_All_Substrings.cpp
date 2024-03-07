// Q42 1781. Sum of Beauty of All Substrings leetcode

// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.
// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

// Example 1:
// Input: s = "aabcb"
// Output: 5

// Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.
//     //   https://youtu.be/08i-avJ6qFo

// // Q42 in string notes

class Solution {
    //   https://youtu.be/08i-avJ6qFo
// Q42 in string notes 
public:
    int beautySum(string s) {
         int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int mn=INT_MAX;
                int mx=INT_MIN;
                for(auto it:mp){
                    if(it.second>mx) 
                        mx=it.second;
                    if(it.second<mn) 
                        mn=it.second;
                }
                sum+=(mx-mn);
            }
        }
        return sum;
    }
};
