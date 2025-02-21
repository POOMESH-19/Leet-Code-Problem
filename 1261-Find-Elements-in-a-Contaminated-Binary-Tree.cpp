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
class FindElements {
public:
TreeNode* ab=NULL;
void ok(TreeNode*&root,int a){
    if(root==NULL){
        return ;
    }
    root->val=a;
    ok(root->left,2*a+1);
    ok(root->right,2*a+2);
}
    FindElements(TreeNode* root) {
        ab=root;
        ok(root,0);  
    }
    bool search(TreeNode*root,int t){
        if(root==NULL) return 0;
        if(root->val==t) return 1;
        return search(root->left,t)||search(root->right,t);
    }
    bool find(int target) {
        return search(ab,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */