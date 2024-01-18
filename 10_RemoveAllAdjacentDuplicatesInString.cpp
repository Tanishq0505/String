// [1047 Leet code] Remove All Adjacent Duplicates in String 
// You are given a string s consisting of lowercase English letters. Duplicate removal consists of choosing two adjacent and equal letters and removing them. 
// We repeatedly make duplicate removals on s until we no longer can. 
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique. 

// Example 1: 
// Input: s = "abbaca" 
// Output: "ca" 
// Explanation:  
// For example, in "abbaca" we could remove "bb" since the l etters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca". 


// https://youtu.be/RrR4ajXvSzo

#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    stack<char> st;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.size() == 0)
        {

            st.push(s[i]);
        }
        else if (s[i] == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    while (st.size() != 0)
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s;
    cout << "Type your sentence: ";
    getline(cin, s);
    cout << "Your sentence is: " << s << endl;
    cout << removeDuplicates(s);
    return 0;
}
