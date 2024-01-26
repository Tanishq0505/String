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
