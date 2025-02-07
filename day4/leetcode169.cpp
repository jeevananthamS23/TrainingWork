class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> ma;
            for (auto i : nums)
                ma[i]++;
    
            for (auto i : nums)
                if ((ma[i]) > int((nums.size()) / 2))
                    return i;
            return 0;
        }
    };