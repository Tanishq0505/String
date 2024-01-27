// Check if a string is a valid shuffle of two other strings
// 1XY2 is a valid shuffle of XY and 12
// Y1X2 is a valid shuffle of XY and 12
// Y21XX is not a valid shuffle of XY and 12
// In the above example, we have a string array named results. It contains three strings:
//  1XY2, Y1X2, and Y21XX. We are checking if these three strings are valid shuffle of
//   strings first(XY) and second(12).

#include <iostream>
#include <string>
#include <algorithm>
// https://youtu.be/Mi5j_yZYcM8
using namespace std;

// Function to check if the lengths of two strings and the result string are compatible
bool checkLength(const string &first, const string &second, const string &result)
{
    return first.length() + second.length() == result.length();
}

// Function to sort a string alphabetically
string sortString(string str)
{
    sort(str.begin(), str.end());
    return str;
}

// Function to check if a result string is a valid shuffle of two other strings
bool shuffleCheck(string first, string second, string result)
{
    // Sort all strings to make comparison easier
    first = sortString(first);
    second = sortString(second);
    result = sortString(result);

    int i = 0, j = 0, k = 0;

    // Iterate through each character of the result string
    while (k != result.length())
    {
        // Check if the current character matches with the next character in the first string
        if (i < first.length() && first[i] == result[k])
            i++;
        // Check if the current character matches with the next character in the second string
        else if (j < second.length() && second[j] == result[k])
            j++;
        // If the current character doesn't match with either string, return false
        else
        {
            return false;
        }
        k++;
    }

    // Check if all characters from both strings have been used
    return i == first.length() && j == second.length();
}

int main()
{
    string first = "XY";
    string second = "12";
    string results[] = {"1XY2", "Y1X2", "Y21XX"};

    // Iterate through each result string and check if it's a valid shuffle
    for (const string &result : results)
    {
        if (checkLength(first, second, result) && shuffleCheck(first, second, result))
        {
            cout << result << " is a valid shuffle of " << first << " and " << second << endl;
        }
        else
        {
            cout << result << " is not a valid shuffle of " << first << " and " << second << endl;
        }
    }

    return 0;
}
