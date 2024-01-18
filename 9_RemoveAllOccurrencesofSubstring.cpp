// [1910 Leet code ]  

// Remove All Occurrences of a Substring 
// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed: 
// Find the leftmost occurrence of the substring part and remove it from s. 
// Return s after removing all occurrences of part. 
// A substring is a contiguous sequence of characters in a string. 

// Example 1: \
// Input: s = "daabcbaabcbc", part = "abc" 
// Output: "dab" 
// Explanation: The following operations are done: 
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc". 
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc". 
// - s = "dababc", remove "abc" starting at index 3, so s = "dab". 
// Now s has no occurrences of "abc". 

#include <string>
#include <iostream>
using namespace std;
// https://youtu.be/Wdjr6uoZ0e0
// watch from 1 hour 18 min
string
removeOccurrences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string str;
    cout << "Enter your string " << endl;
    cin >> str;
    string part;
    cout << "enter part you want to remove" << endl;
    cin >> part;
    cout << removeOccurrences(str, part);
    return 0;
}
