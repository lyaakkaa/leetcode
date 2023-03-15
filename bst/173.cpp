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

class BSTIterator {
    vector <int> vec;
    void inOrder(TreeNode *root){
        if(root == NULL){
            return;
        }
        inOrder(root->left);
        vec.push_back(root->val);
        inOrder(root->right);
    }
public:
    int ind;
    BSTIterator(TreeNode* root) {
        inOrder(root);
        ind = 0;   
    }
    
    int next() {
        ind++;
        return vec[ind - 1];
        
    }
    
    bool hasNext() {
        if(ind == vec.size()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */