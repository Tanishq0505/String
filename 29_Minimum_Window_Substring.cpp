// 29 76. Minimum Window Substring Leetcode

// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
//  The testcases will be generated such that the answer is unique.
// Example 1:Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

// Example 2:
// Input: s = "a", t = "a"
// Output: "a"
// Explanation: The entire string s is the minimum window.

// Q29 in strings
// https://youtu.be/XnY8fe0Gs0E


class Solution {
public:
    string minWindow(string s, string t) {
        // Q29 in strings 
        // https://youtu.be/XnY8fe0Gs0E
         unordered_map<char,int> mp;
         for(auto c:t) mp[c]++;
       int count=t.size();
       int i=0,j=0, n= s.length();
       int min_len=INT_MAX;
       int minstart=0;
      
       
       while(j<n){
           if(mp[s[j]]>0) 
                count--;
             mp[s[j]]--;
            
               while(count==0){
                   
                   if(j-i+1<min_len){
                       minstart=i;
                   min_len=j-i+1;
              
               }
                mp[s[i]]++;
                if(mp[s[i]]>0)
                 count++;
                 i++;
      
                }
                j++;
               }
              
                   
    return(min_len!=INT_MAX?s.substr(minstart,min_len):"");
    }
};
