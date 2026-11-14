class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
       long long  result = x%10;
        int y = x/10;
        while(y>0&&x%10!=0){
            result = result*10 + y%10;
              y = y/10;
        }
        if(result==x){
            return true;
        }
        else{
            return false;
        }
    }
};