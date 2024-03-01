// Count occurrences of a given word in a 2-d array (gfg)

// Find the number of occurrences of a given search word in a 2d-Array of characters where the word can go up, down, left, right, and around 90-degree bends.
// Note: While making a word you can use one cell only once.

// Example 1:

// Input:
// R = 4, C = 5
// mat = {{S,N,B,S,N},
//        {B,A,K,E,A},
//        {B,K,B,B,K},
//        {S,E,B,S,E}}
// target = SNAKES
// Output:
// 3
// Explanation:
// S N B S N
// B A K E A
// B K B B K
// S E B S E
// Total occurrence of the word is 3
// and denoted by color.
// Example 2:

// Input:
// R = 3, C = 3
// mat = {{c,a,t},
//        {a,t,c},
//        {c,t,a}}
// target = cat
// Output:
// 5
// Explanation: Same explanation
// as first example.

// https://youtu.be/GPv_VdSnVjY
// Q21 in string notes



class Solution
{
  
    public int findOccurrence(char mat[][], String target)
    {
        // Write your code here
        int res = 0;
        
        for(int i = 0 ; i < mat.length ; i++){
            
            for(int j = 0 ; j < mat[0].length ; j++){
                
                res += helper(mat , i , j , target , 0);
            }
        }
        
        return res;
    }
    
    int helper(char mat[][] , int i , int j , String target , int idx){
        
        int found = 0 ; 
        
        if(i < mat.length && i >= 0 && j < mat[0].length && j>=0 &&
                    target.charAt(idx) == mat[i][j]){
            
            mat[i][j] = '#';
            
            if(idx == target.length()-1){
                
                found = 1;
            }
            
            else{
                
                found += helper(mat , i , j-1 , target , idx+1);
                found += helper(mat , i+1 , j , target , idx+1);
                found += helper(mat , i-1 , j , target , idx+1);
                found += helper(mat , i , j+1 , target , idx+1);
            }
            
            mat[i][j] =  target.charAt(idx);
        }
        
        return found;
    }
}
