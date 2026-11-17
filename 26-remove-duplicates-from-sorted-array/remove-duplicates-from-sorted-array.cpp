class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int j{1};
        for(int i{1};i<s;i++){
            if(nums[i]!=nums[i-1]){
            nums[j] = nums[i];
            ++j;
            }
        }
        if(s>0){
         return j;
        }
        else{
            return -1;
        }
    }
   
};