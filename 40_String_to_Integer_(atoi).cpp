// 40 8. String to Integer (atoi) leetcode  

// Example 1: 
// Input: s = "42" 
// Output: 42 

// Example 2: 
// Input: s = "   -42" 
// Output: -42 

// Example 3: 
// Input: s = "4193 with words" 
// Output: 4193 

// // https://youtu.be/5FRZactlI7s 

// // Q40 in string notes 

class Solution {
public:
// https://youtu.be/5FRZactlI7s
// Q40 in string notes 
    int myAtoi(string s) {
          if( s.empty())
            return 0;
        int len = s.length(), i=0, sign = 1;
        
        while( i<len && s[i] == ' ')
            i++;
        
        if(i==len)
            return 0;
        
        if(s[i] == '-'){
            sign = 0;
            i++;
        }
        else if(s[i] == '+')
            i++;
        
        long int out = 0;
        
        while(s[i] >= '0' && s[i] <= '9'){
            out = out * 10;
            if(out <= INT_MIN || out >= INT_MAX)
                break;
            out = out + (s[i] - '0');
            i++;
        }
        
        if(sign == 0)
            out = -1 * out;
        if(out <= INT_MIN)
            return INT_MIN;
        if(out >= INT_MAX)
            return INT_MAX;
        return (int)out;
    }
};
