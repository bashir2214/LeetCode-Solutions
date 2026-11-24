class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         return {first(nums,target),second(nums,target)};
    }
       int first(vector<int>& n , int t){
        int f{} ,l{} , m{},ans{-1};
        l = n.size()-1;

        while(f<=l){
             m = (f+l)/2;
             if(n[m]==t){
                ans = m;
             }
            if(n[m]>=t){
               l = m-1;
            }
            else {
                f = m+1;
            }
        }
        return ans;
       }
       int second(vector<int>& n , int t){
        int f{} ,l{} , m{} , ans{-1};
        l = n.size()-1;
        while(f<=l){
             m = (f+l)/2;
             if(n[m]==t){
                ans = m;
             }
            if(n[m]<=t){
               f = m+1;
            }
            else {
                l = m-1;
            }
        }
        return ans;
       }
    
};