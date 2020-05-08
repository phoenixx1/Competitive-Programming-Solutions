class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> frstOccur;
        frstOccur[0] = 0;
        int ans = 0, pref = 0;
        for(int i=0; i<nums.size(); ++i){
            pref += nums[i] == 0 ? -1 : 1;
            auto it = frstOccur.find(pref);
            if(it != frstOccur.end()){
                ans = max(ans, i + 1 - frstOccur[pref]);
            }else{
                frstOccur[pref] = i + 1;
            }
        }
        return ans;
    }
};