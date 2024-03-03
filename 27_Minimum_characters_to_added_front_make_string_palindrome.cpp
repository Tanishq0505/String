// 27 Minimum characters to be added at front to make string palindrome gfg

// Given string str we need to tell minimum characters to be added in front of the string to make string palindrome.

// Examples:

// Input  : str = "ABC"
// Output : 2
// We can make above string palindrome as "CBABC"
// by adding 'B' and 'C' at front.
// Input  : str = "AACECAAAA";
// Output : 2
// We can make above string palindrome as AAAACECAAAA
// by adding two A's at front of string.

// algo
// Initialize two pointers start and end to the beginning and end of the string, respectively.
// While start is less than end, if the characters at the start and end pointers are equal, move the start pointer one position to the right and the end pointer one position to the left. If the characters are not equal, increment the res variable (which keeps track of the number of characters that need to be added) and reset the start and end pointers to the beginning and end of the string with a reduced number of characters.
// When start is no longer less than end, return the value of res as the minimum number of characters that need to be added to the front of the string to make it a palindrome.
// The time complexity of this algorithm is O(n), where n is the length of the input string.
// The space complexity is O(1), since the algorithm uses only constant extra space.

#include <iostream>
#include <string>

using namespace std;
// https://www.geeksforgeeks.org/minimum-characters-added-front-make-string-palindrome/
class Solution
{
public:
    int addMinChar(string str1)
    {
        int n = str1.length();
        int start = 0;
        int end = n - 1;
        int res = 0;
        while (start < end)
        { // While the pointers have not met in the middle of the string
            if (str1[start] == str1[end])
            {            // If the characters at the start and end pointers are equal
                start++; // Move the start pointer to the right
                end--;   // Move the end pointer to the left
            }
            else
            {
                res++;             // Increment the count of characters to be added
                start = 0;         // Reset the start pointer to the beginning of the string
                end = n - res - 1; // Reset the end pointer to the end of the string with a reduced number of characters
            }
        }
        return res; // Return the count of characters to be added
    }
};

int main()
{
    Solution sol;
    string str = "AACECAAAA";
    cout << sol.addMinChar(str) << endl;
    return 0;
}
