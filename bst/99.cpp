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
    void recoverTree(TreeNode* root) {
        vector <int> vec;
        inOrder(root, vec);

        for(int i = 0; i < vec.size(); i++){
            for(int j = i + 1; j < vec.size(); j++){
                if(vec[i] > vec[j]){
                    swap(vec[i], vec[j]);
                }
            }

        }
    }
    void inOrder(TreeNode *node, vector <int> &v){
        if(node == NULL){
            return;
        }
        inOrder(node->left, v);
        v.push_back(node->val);
        inOrder(node->right, v);
    }
};