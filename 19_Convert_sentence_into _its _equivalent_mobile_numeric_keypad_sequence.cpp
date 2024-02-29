// C++ implementation to convert a sentence into its equivalent mobile numeric keypad sequence

// Examples :

// Input: GEEKSFORGEEKS
// Output: 4333355777733366677743333557777
// Explanation: For obtaining a number, we need to press a number corresponding to that character for a number
// of times equal to the position of the character. For example, for character E, press number 3 two times and
//  accordingly.

#include <bits/stdc++.h>
using namespace std;
// https://youtu.be/vmEwQ5vJUaE
// Q19 in notes
// Function which computes the sequence
string
printSequence(string arr[], string input)
{
    string output = "";

    // length of input string
    int n = input.length();
    for (int i = 0; i < n; i++)
    {
        // Checking for space
        if (input[i] == ' ')
            output = output + "0";

        else
        {
            // Calculating index for each
            // character in the array
            int position = input[i] - 'A';
            output = output + arr[position];
        }
    }

    // Output sequence
    return output;
}

// Driver Code
int main()
{
    // storing the sequence in array
    string str[] = {"2", "22", "222", "3", "33", "333", "4",
                    "44", "444", "5", "55", "555", "6", "66",
                    "666", "7", "77", "777", "7777", "8", "88",
                    "888", "9", "99", "999", "9999"};

    string input = "GEEKSFORGEEKS";
    cout << printSequence(str, input);
    return 0;
}
