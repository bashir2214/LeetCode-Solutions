class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        for(int i{};haystack[i]!='\0';++i){
            if(haystack[i]==needle[0]){
                int j{} , k{i};
                
                while(needle[j]!='\0'){
                    if(haystack[k]!=needle[j]){
                        break;
                    }
                    ++j;
                    ++k;
                }
                if(len == j){
                    return i;
                }
            }
        }
        return -1;
    }
};