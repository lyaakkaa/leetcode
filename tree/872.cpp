
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        return helper(root1, root2);
    }
    bool helper(TreeNode *node1, TreeNode *node2){
        if(!node1 || !node2){
            return false;
        }
        if(!node1 && !node2){
            return true;
        }
        vector <int> v1;
        vector <int> v2;
        inOrder(node1, v1);
        inOrder(node2, v2);

        if(v1.size() != v2.size()){
            return false;
        }
        for(int i = 0; i < v1.size(); i++){
            if(v1[i] != v2[i]){
                return false;
            }
        }
        return true;

    }

    void inOrder(TreeNode *node, vector <int> &v){
        if(node == NULL){
            return;
        }
        inOrder(node->left, v);
        if(node->right == NULL && node->left == NULL){
            v.push_back(node->val);
        }
        inOrder(node->right, v);
    }
};



