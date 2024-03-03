// Smallest distinct window  gfg

// Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
// For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca.

// Example 1:

// Input : "AABBBCBBAC"
// Output : 3
// Explanation : Sub-string -> "BAC"

// https://youtu.be/swBjx46TSP4
// see 2nd question of video Q30 IN STRING notes


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // https://youtu.be/swBjx46TSP4
    // see 2nd question of video Q30 IN STRING notes
    int findSubString(string str)
    {
        // Your code goes here   
         int n = str.size();

        // Declare The Count Charter Value 
        vector<int> count(256,0);
    
        int diff =0; // Unique charater Value
        int first =0 , second =0; // Two Pointers
        int len = str.size(); // Initial Minimum Length 
    
    
        // Count The Unique Charater Length  == diff
        while(first<n){
            if(count[str[first]]==0)
            diff++;
    
             count[str[first++]]++;   
        }
    
        // Set Again Count all Valuye 0;
        for(int i=0;i<256;i++){
            count[i]=0;
        }
        first  =0;
    
        // Main Program 
        while(second<n){
    
            // Until the Diff is zero
            while(diff && second<n){
                if(count[str[second]] == 0){
                    diff--;
                }
    
                count[str[second++]]++;
            }
    
            len = min(len , second-first);
    
            // Until the diff == 1
            while(diff !=  1){
                len = min(len , second-first);
                count[str[first]]--;
                if(count[str[first]] == 0){
                    diff++;
                }
                first++;
    
            }
        }
    
    
    
    
        return len;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends
