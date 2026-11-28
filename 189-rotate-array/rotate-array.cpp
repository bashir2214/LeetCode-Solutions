class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> nums1(nums);
        if(k>size){
            k = k%size;
        }
        for(int i{};i<size;++i){
            if(i<k){
                nums[i] = nums1[size-k+i];
            }
            else{
                nums[i] = nums1[i-k];
            }
            }
    }
};