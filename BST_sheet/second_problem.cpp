
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
bool valid=true;
int prev=-2;

void inOrder(TreeNode * node){
    if(node==nullptr)return;

    if(!valid)return;
    inOrder(node->left);

    if(prev!=-2 && prev>=node->val){
        valid=false;
    }

    prev=node->val;

    if(!valid)return;
    inOrder(node->right);
}    
public:
    bool isValidBST(TreeNode* root) {
        inOrder(root);
        return valid;
    }
};