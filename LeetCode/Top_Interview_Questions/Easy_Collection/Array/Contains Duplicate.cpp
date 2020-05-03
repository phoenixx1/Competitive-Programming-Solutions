class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> a;
        for(int x : nums){
            if(a.find(x) != a.end()){
                return true;
            }
            a.insert(x);
        }
        return false;
    }
};