class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> a;
        for(int i = 0; i < nums.size(); i++){
            a[nums[i]].push_back(i);
        }
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i];
            //a[nums[i]].erase(a[nums[i]].begin());
            if(a.count(x)){
                if(x == nums[i]){
                    if(a[x].size() > 1){
                        ans.push_back(i);
                        ans.push_back(a[x][1]);
                        break;
                    }else{
                        continue;
                    }
                }else{
                    ans.push_back(i);    
                    ans.push_back(a[x][0]);
                    break;
                }
            }
        }
        return ans;
    }
};