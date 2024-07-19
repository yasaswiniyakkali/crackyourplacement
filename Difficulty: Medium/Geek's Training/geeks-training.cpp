//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int f(int n,vector<vector<int>>& points,int t,vector<vector<int>>& dp)
    {
        if(n==0)
        {
            int maxi=0;
            for(int i=0;i<3;i++)
            {
                if(i!=t)
                {
                    maxi=max(maxi,points[n][i]);
                }
            }
            return maxi;
        }
        if(dp[n][t]!=-1)return dp[n][t];
        int maxi=0;
        for(int i=0;i<3;i++)
        {
            if(i!=t)
            {
                int p=points[n][i]+f(n-1,points,i,dp);
                maxi=max(p,maxi);
            }
            
        }
        return dp[n][t]=maxi;
    }
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return f(n-1,points,3,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends