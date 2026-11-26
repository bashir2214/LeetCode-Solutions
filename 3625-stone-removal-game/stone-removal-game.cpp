class Solution {
public:
    bool canAliceWin(int n) {
       int count{};
        
      int x = 10;
      while(n>=x){
       
        n = n-x;
         x--;
         count++;
      }
     if(count%2==0){
        return false;
     }
     else{
        return true;
     }
    }
};