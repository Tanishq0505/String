// Steps to implement the hashing approach:

// Declare a unordered map of the char-int pair.
// Traverse the string using a loop and increase the count of the present char in the map.
// Iterate through the map and print a character that has a value greater than one in map.

// C++ program to count all duplicates
// from string using maps

// Time Complexity: O(N),
// Auxiliary Space: O(K), where K = size of the map
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++)
    {
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }
    // iterating through the unordered map
    for (auto it : count)
    {
        // if the count of characters is greater than 1 then
        // duplicate found
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}

// Solution 2:

// Intuition:
// We can also think of another approach, since the string is going to contain only a – z characters, we don’t even need a HashMap. Instead, we can use an array to store the count values.
// Approach:
// First step is to create an Array of size 26(because of the range a – z). We are going to use the ASCII values of the characters to index the array. For eg. ASCII of ‘a’ is 97, if we subtract 97 we get 0. Likewise we can store all the characters from a – z within the index range 0 – 25.
//  We need to initialise all the entries in the array with 0. After this, as usual we traverse the given string, character by character and index the array with the character and increment its value.
// We now traverse the count’s array and if the occurrences count of a character is greater than 1, we output it, else ignore it.
#include <iostream>

using namespace std;

int main()
{
    string str = "sinstriiintng";

    int counts[26] = {
        0};

    for (int i = 0; i < str.length(); i++)
        counts[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (counts[i] > 1)
            cout << (char)(i + 'a') << " - " << counts[i] << "\n";

    return 0;
}
// Time Complexity: O(n), we traverse each character in the string, and accessing the array takes only constant time (n is the length of the string).

// Space Complexity: O(1), since the string has only characters from ‘a’ to ‘z’, the maximum size of the array is 26.
