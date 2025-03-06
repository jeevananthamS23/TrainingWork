class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int low=0,h=nums.size()-1;
            while(low<=h){
                int mid=low+(h-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                if(nums[low]<=nums[mid]){
                    if(nums[low]<=target && target<=nums[mid]){
                        h=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }
                else{
                     if(nums[mid]<=target && target<=nums[h]){
                        low=mid+1;
                    }
                    else{
                        h=mid-1;
                    }
                }
            }
            return -1;
        }
    };