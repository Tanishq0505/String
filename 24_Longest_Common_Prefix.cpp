//  Longest Common Prefix (Leetcode ) 
// Write a function to find the longest common prefix string amongst an array of strings. 
// If there is no common prefix, return an empty string "". 

// Example 1: 
// Input: strs = ["flower","flow","flight"] 
// Output: "fl" 

// Example 2: 
// Input: strs = ["dog","racecar","car"] 
// Output: "" 
// Explanation: There is no common prefix among the input strings. 

// https://youtu.be/XX4ikVj6Bug 
// Q24 in notes 

class Solution{
    public:
string longestCommonPrefix(vector<string>& strs) {
        // https://youtu.be/XX4ikVj6Bug
        // Q24 in notes 
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        
        int index = 0;

        while(index<s1.size() && index<s2.size()){
            if(s1[index]==s2[index]){
                index++;
            }
            else  break;
        }

        return index==0?"":s1.substr(0,index);
    }
};
