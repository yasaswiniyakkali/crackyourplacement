class Solution {
public:
 int solve(int i, int rem, vector<int>& nums, vector<vector<int>>& dp) {
        if (i == nums.size()) {
            return (rem == 0 ? 0 : INT_MIN);  
            // If remainder is 0, valid sum = 0
            // Otherwise invalid state → return very small number
        }

        if (dp[i][rem] != INT_MIN) 
            return dp[i][rem];

        // OPTION 1: Not pick nums[i]
        int notPick = solve(i + 1, rem, nums, dp);

        // OPTION 2: Pick nums[i]
        int newRem = (rem + nums[i] % 3) % 3;
        int pick = nums[i] + solve(i + 1, newRem, nums, dp);

        return dp[i][rem] = max(pick, notPick);
    }
    // int solve(int i,int sum,vector<int>& nums)
    // {
    //     if(i==nums.size())
    //     {
    //         if(sum%3==0)return sum;
    //         return 0;
    //     }
    //     int pick=solve(i+1,sum+nums[i],nums);
    //     int notpick=solve(i+1,sum,nums);
    //     return max(pick,notpick); 

    // }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(3, INT_MIN));
        return solve(0, 0, nums, dp);
        //return solve(0,0,nums);
    }
};