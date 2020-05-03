class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int no = nums[i];
            int j = i+1;
            while(1){
                if(j < nums.size()){
                    if(no == nums[j]){
                        nums.erase(nums.begin()+j);
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        return nums.size();
    }
};