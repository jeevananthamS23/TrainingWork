#include <algorithm>
#include <vector>
class Solution {
public:
    void subset(vector<int>& nums, vector<int>& ans) {
        int n = nums.size();
        ans.push_back(0);
        for (int i = 0; i < n; ++i) {
            int size = ans.size();
            for (int j = 0; j < size; ++j) {
                ans.push_back(ans[j] + nums[i]);
            }
        }
    }
    int minAbsDifference(vector<int>& nums, int goal) {
        int n = nums.size();
        int n1 = n / 2, n2 = n - n / 2;
        vector<int> left(nums.begin(), nums.begin() + n1);
        vector<int> right(nums.begin() + n1, nums.end());
        vector<int> subleft, subright;
        subset(left, subleft);
        subset(right, subright);
        sort(subright.begin(), subright.end());
        int res = INT_MAX;
        for (int i : subleft) {
            int l = 0, r = subright.size() - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                res = min(abs(i + subright[mid] - goal), res);
                if (i + subright[mid] == goal)
                    return 0;
                else if (i + subright[mid] < goal) {
                    l = mid + 1;
                } else
                    r = mid - 1;
            }
        }
        return res;
    }
};