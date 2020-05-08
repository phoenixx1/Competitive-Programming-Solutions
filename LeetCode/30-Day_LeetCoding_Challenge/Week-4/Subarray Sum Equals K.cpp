class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0, pref = 0, need;
        unordered_map<int, int> countPref;
        countPref[pref]++;
        for(int i = 0; i < n; i++){
            pref += nums[i];
            need = pref - k;
            ans += countPref[need];
            countPref[pref]++;
        }      
        return ans;
    }
};