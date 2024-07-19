class Solution {
    int f(int i,int j,int m,vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if(i==m-1)return triangle[i][j];
        if(i>=m)return 1e9;
        if(dp[i][j]!=-1)return dp[i][j];
        int x=triangle[i][j]+f(i+1,j,m,triangle,dp);
        int y=triangle[i][j]+f(i+1,j+1,m,triangle,dp);
        return dp[i][j]=min(x,y);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(0,0,m,triangle,dp);
    }
};