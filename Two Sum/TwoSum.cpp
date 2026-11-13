class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i{};i<size;++i){
            for(int j=i+1;j<size;++j){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }

            }
        }
        return {-1,-1};
    }
};
