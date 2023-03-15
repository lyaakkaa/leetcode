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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL){
            return NULL;
        }
        if(root1 == NULL){
            return root2;
        }
        if(root2 == NULL){
            return root1;
        }
        TreeNode *newroot = new TreeNode(root1->val + root2->val);
        newroot->left = mergeTrees(root1->left, root2->left);
        newroot->right = mergeTrees(root1->right, root2->right);
        return newroot;
    }
};









class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL){
            return NULL;
        }
        if(root1 == NULL){
            return root2;
        }
        if(root2 == NULL){
            return root1;
        }
        queue <pair<TreeNode*, TreeNode*>> q;
        q.push({root1, root2});

        while(!q.empty()){
            TreeNode *node1 = q.front().first;
            TreeNode *node2 = q.front().second;

            q.pop();

            node1->val += node2->val;

            if(node1->left && node2->left){
                q.push({node1->left, node2->left});
            }
            else if(node2->left){
                node1->left = node2->left;
            }
            if(node1->right && node2->right){
                q.push({node1->right, node2->right});
            }
            else if(node2->right){
                node1->right = node2->right;
            }
        }
        return root1;
    }
};