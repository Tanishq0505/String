// GFG 
//  Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically
// smaller character. 
// Example 1: 
// Input: 
// str = testsample 
// Output: e 
// Explanation: e is the character which 
// is having the highest frequency. 

// Example 2: 
// Input: 
// str = output 
// Output: t 
// Explanation:  t and u are the characters 
// with the same frequency, but t is 
// lexicographically smaller. 


#include <string>
#include <iostream>
#include <vector>
// https://youtu.be/Wdjr6uoZ0e0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA
// start from 57 min
//  do dry run to understand better
using namespace std;
char getMaxOccCharacter(string s)
{

    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find maximum occ character
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}
int main()
{
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}
