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
    bool isCousins(TreeNode* root, int x, int y) {
        
    }
    class Pair{
        TreeNode *parent;
        int level;

        Pair(TreeNode *parent, int level){
            this->parent = parent;
            this->level = level;
        }
    };

    Pair * isCousinsHelper(TreeNode *root, int val, TreeNode *parent, int level){
        if(root == NULL){
            return NULL;
        }
        if(root->val == val){
            return new Pair(parent, level);
        }

    }
    
};