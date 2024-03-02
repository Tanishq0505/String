// 26 Minimum Swaps for Bracket Balancing (gfg)

// You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. A string is considered balanced if it can be represented in the form S2[S1] where S1 and S2 are balanced strings. We can make an unbalanced string balanced by swapping adjacent characters.
// Calculate the minimum number of swaps necessary to make a string balanced.

// Note - Strings S1 and S2 can be empty.

// Example 1:

// Input  : []][][
// Output : 2
// Explanation :
// First swap: Position 3 and 4
// [][]][
// Second swap: Position 5 and 6
// [][][]

// https://youtu.be/FaxCT9zumVs
// Q26 in notes

class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        // https://youtu.be/FaxCT9zumVs
        // Q26 in notes 
           int ans =0, n= S.size();
        int count=0;
        
        for(int i=0;i<n;i++)
        {
           if(S[i]=='[')
           count++;
           else
           {
               count--;
               if(count<0)
               ans-=count;
           }
        }
        return ans;
    }
};
