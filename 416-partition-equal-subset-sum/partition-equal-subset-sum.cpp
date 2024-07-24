class Solution {
    bool f(int i,vector<int> &nums,int s,vector<vector<int>> &dp)
    {
        if(s==0)return true;
        if(i==0)return (nums[0]==s);
        if(dp[i][s]!=-1)return dp[i][s];
        bool np=f(i-1,nums,s,dp);
        bool p=false;
        if(nums[i]<=s)
        {
            p=f(i-1,nums,s-nums[i],dp);
        }
        return dp[i][s]=(p|np);
    }
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0){return false;}
        int s=sum/2;
        vector<vector<int>> dp(n,vector<int>(s+1,-1));
        return f(n-1,nums,s,dp);
    }
};