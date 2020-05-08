class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0 || needle == haystack){
            return 0;
        }

        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                string temp = haystack.substr(i, needle.size());
                if(temp == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};