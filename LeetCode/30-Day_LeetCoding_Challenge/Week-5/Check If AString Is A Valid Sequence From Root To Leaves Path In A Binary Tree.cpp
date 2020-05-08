/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return existPath(root, arr, 0);
    }
    bool existPath(TreeNode* root, vector<int>& arr, int index){
        if(root == NULL || index >= arr.size() || arr.size() == 0){
            return false;
        }
        if((root->left == NULL && root->right == NULL) && (root->val == arr[index] && root->val == arr[arr.size() - 1])){
            return true;
        }
        bool ans = false;
        if(root->val == arr[index]){
            ans = existPath(root->left, arr, index+1) || existPath(root->right, arr, index + 1);
        }
        return ans;
    }
};