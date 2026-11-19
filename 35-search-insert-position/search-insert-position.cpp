class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int i{};
        while(i<size&&nums[i]<=target){
            if(nums[i]==target){
                return i;
            }
            ++i;
        }
        return i;
    }
};