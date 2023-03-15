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

    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        helper(root, ans);
        return ans;
    }
    int helper(TreeNode *root, int &ans){
        
        if(root == NULL){
            return 0;
        }
        int l = helper(root->left, ans);
        int r = helper(root->right, ans);
        if(l + r > ans){
            ans = l + r;
        }
        return max(l, r) + 1;
    }
};