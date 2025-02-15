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
    void solve(TreeNode* root, int &count) {
        if (!root) {
            return ;
        }

        if (root->left) {
            count++;
            solve(root->left, count);
        }
        if (root->right) {
            count++;
            solve(root->right, count);
        }
    }

    int countNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int count = 0;
        solve(root, count);
        return count + 1;
    }
};