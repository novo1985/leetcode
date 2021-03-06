#include <iostream>

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};
//given a binary search tree, find the lowest common ancestor!
class Solution{
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){

    if(p == root || q == root){ return root;}
    if(p == q){return p;}
    if((p->val < root->val && q->val > root->val) ||(p->val > root->val && q->val < root->val)){
      return root;
    }
    else if((p->val < root->val && q->val < root->val)){
      return lowestCommonAncestor(root->left, p , q);
    }
    else {
      return lowestCommonAncestor(root->right, p , q);
    }

  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}