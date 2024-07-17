class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int x=0;
        if(n%2==0){
            x=n/2;
        }
        else{
            x=(n-1)/2;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=abs(nums[x]-nums[i]);
        }
        return sum;
    }
};