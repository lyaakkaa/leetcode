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
    void flatten(TreeNode* root) {
        vector <int> v;
        inOrder(root, v);
        root = new TreeNode(v[1]);
        
        for(int i = 0; i < v.size(); i++ ){
            root->right = new TreeNode(v[i]);
            root->left = NULL;
            root = root->right;
        }
     
        
    }
    void inOrder(TreeNode *root, vector <int> &vec){
        if(root == NULL){
            return;
        }
        vec.push_back(root->val);
        inOrder(root->left, vec);
        
        inOrder(root->right, vec);
    }
};