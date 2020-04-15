#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            auto it = nums.begin() + i;
            nums.erase(it);
            ans.push_back(accumulate(nums.begin(), nums.end(), 1, multiplies<int>()));
            nums.insert(it, temp);
        }
        return ans;
    }

int main(){
    vector<int> nums = {1,2,3,4};
    nums = productExceptSelf(nums);
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}