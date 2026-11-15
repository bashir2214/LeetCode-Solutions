class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int j{};
        for(int i{};i<size;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                ++j;
            }          
    }
    return j;
    }
};