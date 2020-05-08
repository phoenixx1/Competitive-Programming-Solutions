class Solution {
public:
    bool isPalindrome(string s) {
        if(s == ""){
            return true;
        }
        string t = "";
        for (int i = 0; i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
            if(isalnum(s[i])){
                t += s[i];
            }
        }
        s = t;
        int l = 0;
        int h = s.size() - 1;
        while(h > l){
            if(s[l++] != s[h--]){
                return false;
            }
        }
        return true;
    }
};