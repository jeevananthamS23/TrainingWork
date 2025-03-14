class Solution {
    public:
        long long possi(int mid, vector<int>& candies) {
            long long count = 0;
            for (long long i = 0; i < candies.size(); i++) {
                count += candies[i] / mid;
            }
            return count;
        }
        int maximumCandies(vector<int>& candies, long long k) {
    
            long long l = 1;
            long long h = *max_element(candies.begin(), candies.end());
            long long ans = INT_MIN;
            while (l <= h) {
                long long mid = l + (h - l) / 2;
                long long possible = possi(mid, candies);
                if (possible >= k) {
                    ans = max(mid, ans);
                    l = mid + 1;
    
                } else {
                    h = mid - 1;
                }
            }
            return ans < 0 ? 0 : ans;
        }
    };