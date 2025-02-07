#include <cmath>

class Solution {
    long long permutation(int n, long long mod) {
        long long ans = 1;
        for (int i = 2; i <= n; ++i)
            ans = (ans * i) % mod;
        return ans;
    }

public:
    int numPrimeArrangements(int n) {
        int count = 0;
        const long long mod = 1e9 + 7;

        for (int i = 2; i <= n; i++) {
            bool res = true;
            int limit = sqrt(i);
            for (int j = 2; j <= limit; j++) {
                if (i % j == 0) {
                    res = false;
                    break;
                }
            }
            if (res) count++;
        }

        return (permutation(count, mod) * permutation(n - count, mod)) % mod;
    }
};
