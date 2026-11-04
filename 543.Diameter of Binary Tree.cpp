
class Solution {
public:
   int height(TreeNode* root){
    if(root== NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    return max(leftht,rightht) +1;
   }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root== NULL){
            return 0;
        }
        int leftdim=diameterOfBinaryTree(root->left);
         int rightdim=diameterOfBinaryTree(root->right);
        int currdim=height(root->left) + height(root->right);
        return max(currdim,max(leftdim,rightdim));
    }
};