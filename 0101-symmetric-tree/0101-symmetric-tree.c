/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool helper(struct TreeNode* p,struct TreeNode*q){
    if(p==NULL && q==NULL) return true;
    else if(q==NULL||p==NULL)return false;
    else if(p->val!=q->val) return false;
    return helper(p->left,q->right)&&helper(p->right,q->left);
}
    
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL)return 1;
    return helper(root->left,root->right);
    
}