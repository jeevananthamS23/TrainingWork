class Solution {
    public:
        int upper(vector<int>& nums, int k) {
            int l = 0, h = nums.size()-1, ans = -1;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (nums[mid] == k){
                    ans = mid;
                    l=mid+1;}
                else if (nums[mid] > k) {
                    h = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            return ans;
        }
        int lower(vector<int>& nums, int k) {
            int l = 0, h = nums.size()-1, ans = -1;
            while (l <= h) {
                int mid = l + (h - l) / 2;
                if (nums[mid] == k){
                    ans = mid;
                   h = mid - 1;}
                else if (nums[mid] > k) {
                    h = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            return ans;
        }
        vector<int> searchRange(vector<int>& nums, int target) {
            int l = lower(nums, target);
            int u = upper(nums,target);
            return {l,u};
        }
    };