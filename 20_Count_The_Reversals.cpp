//  Count the Reversals (gfg)

// Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
// A reversal means changing '{' to '}' or vice-versa.

// Example 1:

// Input:
// S = "}{{}}{{{"
// Output: 3
// Explanation: One way to balance is:
// "{{{}}{}}". There is no balanced sequence
// that can be formed in lesser reversals.

// Example 2:

// Input:
// S = "{{}{{{}{{}}{{"
// Output: -1
// Explanation: There's no way we can balance
// this sequence of braces.

// https://youtu.be/-wZSBu5ckA4
// Q20 in notes
// TC O(n)  SC O(1)

int countRev (string s)
{
    // your code here
    // https://youtu.be/-wZSBu5ckA4
    // Q20 in notes 
    // TC O(n)  SC O(1)
       if(s.length() % 2 != 0)
            return -1;
        
        int open = 0, close=0,res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '{'){
               open++;
            }
            else {
                if(open==0){
                    res++;
                    open++;
                }
                else{
                    open--;
                }
            }
         
        }
        res += (open+close) / 2;
        return res;
}
