class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size() == 0){
            return -1;
        }
        unordered_map<char, vector<int>> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]].push_back(i);
        }
        for(char x : s){
            if(mp[x].size() == 1){
                return mp[x][0];
            }
        }
        return -1;
    }
};