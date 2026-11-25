class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       vector<int> nums1(nums);
       int size = nums.size();
       int k{1},occurance{1};
       for(int i{1};i<size;++i){
        
        if(nums1[i]!=nums1[i-1]){
            nums[k] = nums1[i];
            ++k;
           occurance = 1;
        }
        else if(nums1[i]==nums1[i-1]&&occurance<2){
            nums[k] = nums1[i];
            ++k;
            ++occurance;
        }
       }
       return k; 
    }
};