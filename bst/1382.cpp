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
    TreeNode* balanceBST(TreeNode* root) {
        vector <int> vec;
        inOrder(root, vec);

        return foo(vec, 0, vec.size() - 1);
        
    }
    void inOrder(TreeNode *node, vector <int> &v){
        if(node == NULL){
            return;
        }
        inOrder(node->left, v);
        v.push_back(node->val);
        inOrder(node->right, v);
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
    TreeNode *foo(vector <int> &nums, int l, int r){
        if(l > r) return NULL;
        int m = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nums[m]);
        root->left = foo(nums,l, m - 1);
        root->right = foo(nums, m + 1, r);
        return root;
    }
    
};



