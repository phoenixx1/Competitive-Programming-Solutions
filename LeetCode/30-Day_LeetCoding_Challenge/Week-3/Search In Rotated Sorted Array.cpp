class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it = find(nums.begin(), nums.end(), target);
        if(it == nums.end()){
            return -1;
        }else{
            return  distance(nums.begin(), it);
        }
    }
};