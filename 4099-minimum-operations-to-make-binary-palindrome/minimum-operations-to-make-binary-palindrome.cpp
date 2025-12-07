class Solution {
public:
    long long findMinOps(long long x) {

        // Check downward
        long long down = x;
        while (down >= 0 && !isBinaryPalindrome(down)) {
            down--;
        }

        // Check upward
        long long up = x;
        while (!isBinaryPalindrome(up)) {
            up++;
        }

        long long d1 = x - down; // operations going downward
        long long d2 = up - x;   // operations going upward

        return min(d1, d2);
    }

    bool isBinaryPalindrome(long long n) {
        string b = bitset<64>(n).to_string();

        // remove leading zeros
        b = b.substr(b.find('1'));

        string rev = b;
        reverse(rev.begin(), rev.end());

        return b == rev;
    }
    vector<int> minOperations(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = findMinOps(nums[i]);
        }
        return ans;
    }
};