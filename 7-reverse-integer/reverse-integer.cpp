class Solution {
public:
    int reverse(int x) {
        // while(x%10!=0)
        // {
        //     x=x/10;
        // }
        int n=x;
        int ans=0;
        while(n!=0)
        {
            int d=n%10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0; 
            }
            ans=ans*10+d;
            n=n/10;
        }
        return ans;
    }
};