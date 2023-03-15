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
    int minDiffInBST(TreeNode* root) {
        vector <int> vec;
        inOrder(root, vec);
        int min = INT_MAX;
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i + 1] - vec[i] < min){
                min = vec[i + 1] - vec[i];
            }

        }
        return min;        
    }

    void inOrder(TreeNode *root, vector <int> &v){
        if(root == NULL){
            return;
        }
        inOrder(root->left, v);
        v.push_back(root->val);
        inOrder(root->right, v);
    }
};





class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int diff = INT_MAX;
        int prev = -1;
        inOrder(root, diff, prev);
        return diff;
    }
    
    void inOrder(TreeNode* root, int &diff, int &prev){
        if(root == NULL){
            return;
        }
        inOrder(root->left, diff, prev);
        if(prev != -1){
            diff = min(diff, root->val - prev);
        }
        prev = root->val;
        inOrder(root->right, diff, prev);
        
    }
};
