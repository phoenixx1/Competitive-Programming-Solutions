class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int canReach = 0;
        for(int i = 0; i <= canReach; i++){
            if(i == n - 1){
                return true;
            }
            canReach = max(canReach, i + nums[i]);
        }
        return false;
    }
};