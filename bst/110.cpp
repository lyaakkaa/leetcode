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
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        int h_l = height(root->left);
        int h_r = height(root->right);
        if(abs(h_l - h_r) <= 1 && isBalanced(root->right) && isBalanced(root->left)){
            return true;
        }
        return false;

        
    }
    int height(TreeNode *node){
        if(node == NULL){
            return 0;
        }
        int h_l = height(node->left);
        int h_r = height(node->right);
        return 1 + max(h_l, h_r);
    }
};








class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            int l_h = height(node->left);
            int r_h = height(node->right);

            if(abs(l_h - r_h) >= 2){
                return false;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        return true;
      
    }
    int height(TreeNode *root){
        if(root == NULL){
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
    
};