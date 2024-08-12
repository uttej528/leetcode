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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
    
private:
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        inorderHelper(node->left, result);  // Traverse left subtree
        result.push_back(node->val);        // Visit node
        inorderHelper(node->right, result); // Traverse right subtree
    }
};