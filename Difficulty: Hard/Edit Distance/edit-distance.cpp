//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int f(int i,int j,string s1,string s2,vector<vector<int>> &dp)
    {
        if(i<0)return j+1;
        if(j<0)return i+1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j])return 0+f(i-1,j-1,s1,s2,dp);
        return dp[i][j]=1+min(f(i-1,j-1,s1,s2,dp),min(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp)));
    }
  public:
    int editDistance(string str1, string str2) {
        // Code here
            int m=str1.size();
            int n=str2.size();
            vector<vector<int>> dp(m,vector<int>(n,-1));
            return f(m-1,n-1,str1,str2,dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends