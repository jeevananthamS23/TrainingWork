class Solution {
    public:
        int possible(int weight, vector<int>& weights, int days) {
            int day = 1, sum = 0;
            for (int i = 0; i < weights.size(); i++) {
                if (sum + weights[i] > weight) {
                    day++;
                    sum = weights[i];
                } else {
                    sum += weights[i];
                }
            }
            return day <= days;
        }
        int shipWithinDays(vector<int>& weights, int days) {
            int l = 0;
            int h = 0;
            for (auto g : weights) {
                h += g;
                l = max(l, g);
            }
    
            int minimum = INT_MAX;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                 if (possible(mid, weights, days)) {
                    minimum = min(mid, minimum);
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            return minimum;
        }
    };