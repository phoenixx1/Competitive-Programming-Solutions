class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int product = 1, zeroCount = 0, prodOfNZero = 1;
        for(int x : nums){
            product *= x;
            if(x == 0){
                zeroCount++;
            }else{
                prodOfNZero *= x;
            }
        }
        if(product != 0){
            for(int i=0; i<nums.size(); i++){
                ans[i] = (product / nums[i]);
            }
        }else if(zeroCount == 1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0){
                    ans[i] = prodOfNZero;
                }
            }
        }else{
            //nothing
        }
        return ans;
    }
};