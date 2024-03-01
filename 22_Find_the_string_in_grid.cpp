//  Find the string in grid (gfg)

// Given a 2D grid of n*m of characters and a word, find all occurrences of given word in grid. A word can be matched in all 8 directions at any point. Word is said to be found in a direction if all characters match in this direction (not in zig-zag form). The 8 directions are, horizontally left, horizontally right, vertically up, vertically down, and 4 diagonal directions.

// Note: The returning list should be lexicographically smallest. If the word can be found in multiple directions starting from the same coordinates, the list should contain the coordinates only once.

// Example 1:

// Input:
// grid = {{a,b,c},{d,r,f},{g,h,i}},
// word = "abc"
// Output:
// {{0,0}}
// Explanation:
// From (0,0) we can find "abc" in horizontally right direction.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    // https://youtu.be/omGydjrStOA
    // Q22 in string notes
    bool exists(vector<vector<char>> grid, string word, int i, int j, int n, int m, int s, int x[], int y[])
    {
        for(int dir=0;dir<8; dir++)
        {
        int i1=i, j1=j, k=0;
        int x1=x[dir], y1=y[dir];
        
        
        while(i1>=0 && i1<n && j1>=0 && j1<m && k<s)
        {
            if(word[k]==grid[i1][j1]){
                i1+=x1;
                j1+=y1;
                k++;
            }else{
                break;
            }
        }

        if(k==s){
            return true;
        }
        
        }
        
        return false;
        
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>> ans; 
	    vector<int> p(2);
	    
	    int i, j, n, m, s;
	    
	    int x[8]= {-1, 0, 1, 1, 1, 0, -1, -1};
        int y[8]= {1, 1, 1, 0, -1, -1, -1, 0};
	    
	    n=grid.size();
	    m=grid[0].size();
	    s=word.size();
	    
	    for(i=0; i<n; i++)
	    {
	        for(j=0; j<m; j++)
	        {
	            
	            if(exists(grid, word, i, j, n, m, s, x, y)){
	                p[0]=i;
	                p[1]=j;
	                ans.push_back(p);
	            }
	        }
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends
