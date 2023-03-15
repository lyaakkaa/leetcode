#include <bits/stdc++.h>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };







  
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder){
        if(preorder.size() == 0){
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[0]);
        for(int i = 1; i < preorder.size(); i++){
            root = insert(root, preorder[i]);
        }
        return root;

    }

    TreeNode *insert(TreeNode  *node, int data){
        if(node == NULL){
            node = new TreeNode(data);
            return node;
        }
        if (data <= node->val){
            node->left = insert(node->left, data);
        }
        else{
            node->right = insert(node->right, data);
        }
        return node;
    }
};