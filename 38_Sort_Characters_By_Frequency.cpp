// Q38 451. Sort Characters By Frequency gfg
// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
// Return the sorted string. If there are multiple answers, return any of them.

// Example 1:
// Input: s = "tree"
// Output: "eert"

// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
// // https://youtu.be/9bqxy6TdbW8
// // Q38 in notes

class Solution {
public:
// https://youtu.be/9bqxy6TdbW8
// Q38 in notes 
    string frequencySort(string s) {
         map<char,int> mp;

        //create the mapping
        for(int i=0; i<s.size(); i++)
           mp[s[i]]++;

        string ans="";
        priority_queue< pair<int,char> >pq;

           for(auto i:mp)
              pq.push({i.second,i.first});

            while(!pq.empty())
            {
                int n=pq.top().first;

                   while(n--)
                   {
                      ans += pq.top().second;
                   }

                   pq.pop();
            }

            return ans;
    }
};
