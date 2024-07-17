class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int x=nums[n-1]*nums[n-2]*nums[0];
        int y=nums[0]*nums[1]*nums[2];
        if(x>y)
        {
            return x;
        }
        return y;
    }
};