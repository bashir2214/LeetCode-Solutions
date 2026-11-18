class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back()==' '){
            s.pop_back();
        }
     int len = s.length();

     int r{};
     for(int i{len-1};s[i]!=' ';--i){
        ++r;
        if(i==0){
            break;
        }
     } 
     return r;  
    }
};