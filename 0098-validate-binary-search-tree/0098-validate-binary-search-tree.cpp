class Solution {
    void inorder(TreeNode* root, vector<int>& temp) {
        if (root == nullptr) return;
        inorder(root->left, temp);
        temp.push_back(root->val);
        inorder(root->right, temp);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> temp;
        inorder(root, temp);
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i] >= temp[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

