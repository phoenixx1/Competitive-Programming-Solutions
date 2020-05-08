class Solution {
public:
    string loop(string s){
        string t = "";
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            char x = s[i];
            int j = i;
            while(s[j++] == x){
                count++;
            }
            i = j - 2;
            t += to_string(count) + x;
            count = 0;
        }
        return t;
    }
    string countAndSay(int n) {
        string s = "1";
        if(n == 1){
            return s;
        }
        for(int i = 0; i < n-1; i++){
            s = loop(s);
        }
        return s;
    }
};