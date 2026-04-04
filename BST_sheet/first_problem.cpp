
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 


class Solution {
private:
  int minDifference=1e8;
  int previous=-1;

  void inOrder(TreeNode * node){
    if(node==nullptr) return;

    inOrder(node->left);

    if(previous!=-1){
        minDifference=min(minDifference,node->val-previous);
    }
    previous=node->val;

    inOrder(node->right);
  }

public:
    int getMinimumDifference(TreeNode* root) {
        inOrder(root);

        return minDifference;
    }
};