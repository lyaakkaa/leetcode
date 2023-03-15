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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL){
            return true;
        }
        if(root == NULL){
            return false;
        }
        if(sameTree(root, subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

    
    }
    bool sameTree(TreeNode *node1, TreeNode *node2){
        if(node1 == NULL && node2 == NULL){
            return true;
        }
        if(node1 && node2 && node1->val == node2->val){
            return sameTree(node1->left, node2->left) && sameTree(node1->right, node2->right);
        }
        return false;
    }
    
};








class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue <TreeNode*> q;

        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->val == subRoot->val){
                    if(sameTree(node, subRoot)){
                        return true;
                    }
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
        }
        return false;
    
    }
    bool sameTree(TreeNode *node1, TreeNode *node2){
        if(node1 == NULL && node2 == NULL){
            return true;
        }
        if(node1 && node2 && node1->val == node2->val){
            return sameTree(node1->left, node2->left) && sameTree(node1->right, node2->right);
        }
        return false;
    }
    
};