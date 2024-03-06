// Q37 242. Valid Anagram leetcode

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Use approach to understand
// Approach: Just count the frequency of every element in Str1 and iterate through Str2 and decrease
// the count of every element in the frequency array. Now iterate again, if the frequency at any
// point is not 0 this means, strings are not anagrams of each other.

#include <iostream>
#include <algorithm>
using namespace std;
bool CheckAnagrams(string str1, string str2)
{
    // when both of the strings have different lengths
    if (str1.length() != str2.length())
        return false;

    int freq[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        freq[str1[i] - 'A']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        freq[str2[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";
    if (CheckAnagrams(Str1, Str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
