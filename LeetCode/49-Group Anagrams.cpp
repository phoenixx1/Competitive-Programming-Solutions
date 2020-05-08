class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;
        
        int i=0;
        for(string s : strs){
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i++]);
        }    
        for(auto j : mp){
            sort(j.second.begin(), j.second.end());
            res.push_back(j.second);
        }
        return res;
    }
};