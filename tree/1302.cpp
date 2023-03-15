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
int sum = 0;

    int deepestLeavesSum(TreeNode* root) { 
        int h = height(root);
        helper(root, 1, h);
        return sum;
        
    }

    void helper(TreeNode *root, int cur, int h){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL && cur == h){
            sum += root->val;
        }
        helper(root->left, cur + 1, h);
        helper(root->right, cur + 1, h);
    }

    int height(TreeNode *root){
        if(root == NULL){
            return 0;
        }
        int l_h = height(root->left);
        int r_h = height(root->right);
        return 1 + max(l_h, r_h);
    }
};






class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        queue <TreeNode *> q;
        q.push(root);
        int sum = 0;
        
        while(!q.empty()){
            int sz = q.size();
            sum = 0;

            for(int i = 0; i <sz; i++){
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

            }
        }
        return sum;
    }
};
