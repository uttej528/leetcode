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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {  // Fixed `data` to `val`
            return root;
        }

        if (val<root->val) {  // Fixed `data` to `val`
            return searchBST(root->left, val);  // Fixed `data` to `val`
        }

        return searchBST(root->right, val);  // Fixed `data` to `val`
    }
};