
//Problem Link -> https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3347/

//Idea -> Tree Traversal
// TC = O(n)
// SC = O(n)


TreeNode* invertBT(TreeNode* root){
    if(root == NULL)
        return NULL;
    
    TreeNode* head = new TreeNode(root->val);
    head->left = invertBT(root->right);
    head->right = invertBT(root->left);
    return head;
}

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        return invertBT(root);
    }
};
