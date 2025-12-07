class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;

        if (n % 2 == 0 || n % 3 == 0) return false;

        // Check only numbers of form 6k ± 1
        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);

        // Check all prefixes
        for (int i = 1; i <= s.size(); i++) {
            int prefix = stoi(s.substr(0, i));
            if (!isPrime(prefix)) return false;
        }

        // Check all suffixes
        for (int i = 0; i < s.size(); i++) {
            int suffix = stoi(s.substr(i));
            if (!isPrime(suffix)) return false;
        }

        return true;
    }
};