class Solution {
    int f(int i,vector<int>& nums,vector<int>& dp)
    {
        if(i==0)return nums[i];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int p=nums[i]+f(i-2,nums,dp);
        int np=0+f(i-1,nums,dp);
        return dp[i]=max(p,np);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n,-1);
        vector<int> hp(n,-1);
        vector<int> temp1,temp2;
        for(int i=0;i<n;i++)
        {
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
        }
        int x= f(temp1.size()-1,temp1,dp);
        int y= f(temp2.size()-1,temp2,hp);
        return max(x,y);
    }
};