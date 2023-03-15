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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        int sum = 0;
        return helper(root, sum, targetSum);
    }
    bool helper(TreeNode *root, int sum, int t){
        if(root == NULL){
            return false;
        }
        sum += root->val;
        
        if(root->left == NULL && root->right == NULL){
            if(sum == t){
                return true;
            }
            else{
                return false;
            }
        }
        return helper(root->left, sum , t) || helper(root->right, sum, t);
    }
};






class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        queue <pair<TreeNode *, int>> q;
        q.push({root, root->val});

        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                TreeNode *node = q.front().first;
                int sum = q.front().second;
                q.pop();

                if(sum == targetSum && node->left == NULL && node->right == NULL){
                    return true;
                }
                if(node->left){
                    q.push({node->left, sum + node->left->val});
                }
                if(node->right){
                    q.push({node->right, sum + node->right->val});
                }
            }
        }
        return false;
    }
    
};