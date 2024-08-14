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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderHelper(root, result);
        return result;
    }
    
public:
    void postorderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        postorderHelper(node->left, result);  // Traverse left subtree
             
        postorderHelper(node->right, result); // Traverse right subtree
         result.push_back(node->val);  // Visit node
    }
};