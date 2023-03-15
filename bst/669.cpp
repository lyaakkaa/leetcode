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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return NULL;
        }
        vector <int> v;
        inOrder(root, v, low, high);
        for(int i = 0; i < v.size(); i++){
            root = deletenode(root, v[i]);
        }
        return root;
        
    }

    void inOrder(TreeNode *node, vector <int> &v, int low, int high){
        if(node == NULL){
            return;
        }
        inOrder(node->left, v, low, high);
        if(node->val < low || node->val > high){
            v.push_back(node->val);
        }
        inOrder(node->right, v, low, high);
        
    }

    TreeNode *insert(TreeNode *node, int val){
        if(node == NULL){
            node = new TreeNode(val);
            return node;
        }
        if(val <= node->val){
            node->left = insert(node->left, val);
        }
        else{
            node->right = insert(node->right, val);
        }
        return node;

    }

    TreeNode *findMin(TreeNode *node){
        while(node->left != NULL){
            node = node->left;
        }
        return node;
    }

    TreeNode *findMax(TreeNode *node){
        while(node->right != NULL){
            node = node->right;
        }
        return node;
    }

    TreeNode *deletenode(TreeNode *node, int data){
        if(node == NULL){
            return NULL;
        }
        if (data < node->val){
            node->left = deletenode(node->left, data);
        }
        else if (data > node->val){
            node->right = deletenode(node->right, data);
        }
        else{
            if (node->left == NULL and node->right == NULL){
                return NULL;
            }
            else if (node->left == NULL){
                node = node->right;
            }
            else if (node->right == NULL){
                node = node->left;
            }
            else{
                TreeNode *tmp = findMin(node->right);
                node->val = tmp->val;
                node->right = deletenode(node->right, tmp->val);
            }
        }
        return node;

    }
};








class Solution {
public:
    TreeNode* trim(TreeNode* root,int low,int high){
        if(!root) return NULL;
        if(root->val > high){
            return trim(root->left,low,high);
        } 
        else if(root->val < low){
            return trim(root->right,low,high);
        }
        root->left = trim(root->left,low,high);
        root->right = trim(root->right,low,high);
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return trim(root,low,high);
    }
};

