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
    TreeNode* bstToGst(TreeNode* root) {
        vector <int> vec;
        postOrder(root, vec);
        for(int i = 1; i < vec.size(); i++){
            vec[i] = vec[i - 1] + vec[i];
        }
        return foo(vec, 0, vec.size() - 1);
    }

    void postOrder(TreeNode *node, vector <int> &v){
        if(node == NULL){
            return ;
        }
        postOrder(node->right, v);
        postOrder(node->left, v);
        v.push_back(node->val);

    }
    TreeNode *foo(vector <int> &nums, int l, int r){
        if(l > r) return NULL;
        int m = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nums[m]);
        root->right = foo(nums, l, m - 1);
        root->left = foo(nums, m + 1, r);
        return root;
    }
};



class Solution {
public:
    void fun(TreeNode * root,int &sum){
        if(!root)return; // base case
        fun(root->right,sum); // running right to calculate the greater interger sum
        root->val+=sum; // adding the sum obtained so far to root.
        sum = root->val; // updating the sum
        fun(root->left,sum); // Recursively calling for left
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        fun(root,sum);
        return root; 
    }
};