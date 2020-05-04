class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        for(int i = 0; i < n; i++){
            if(nums2.empty()){
                break;
            }else{
                auto it = find(nums2.begin(), nums2.end(), nums1[i]);
                if(it != nums2.end()){
                    nums2.erase(it);
                    ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};