// // 46. Permutations (Leet code )
// // Permutations of a given string (gfg)

// Given a string S. The task is to print all unique permutations of the given string in lexicographically sorted order.

// Example 1:

// Input: ABC
// Output:
// ABC ACB BAC BCA CAB CBA
// Explanation:
// Given string ABC has permutations in 6
// forms as ABC, ACB, BAC, BCA, CAB and CBA/

// https://youtu.be/va3NEycUxsg
// Q16 in notes

class Solution
{

     void solve (string s,vector<string>&ans,int index){
        if(index>=s.size() ){
            ans.push_back(s);
            return;
        }
        for(int i=index;i<s.size();i++){
            swap(s[index],s[i]);
            solve(s,ans,index+1);
            //backtrack
            swap(s[index],s[i]);
        }
    }
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		     vector<string>ans;
    int index=0;
    solve(s,ans,index);
  sort(ans.begin(),ans.end());
//   To get unique output 
         ans.erase(unique(ans.begin(),ans.end()),ans.end());

     return ans;
		}
};
