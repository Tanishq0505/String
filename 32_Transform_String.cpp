// Transform String gfg

// Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.

// Example 1:

// Input:
// A = "abd"
// B = "bad"
// Output: 1
// Explanation: The conversion can take place in
// 1 operation: Pick 'b' and place it at the front.

// Q32 in string notes
// https://youtu.be/r6mnqMhi-FM

class Solution
{
    public:
    int transform (string A, string B)
    {
        // Q32 in string notes 
        // https://youtu.be/r6mnqMhi-FM
unordered_map<char,int>unm;
        for(int i=0;i<A.length();i++){
            unm[A[i]]++;
        }
        for(int i=0;i<B.length();i++){
            unm[B[i]]--;
        }
        for(auto i:unm){
            if(i.second!=0)return -1;
        }
        int i=A.length()-1;
        int j=B.length()-1;
        int count=0;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                count++;
                i--;
            }
        }
        return count;
    }
};
