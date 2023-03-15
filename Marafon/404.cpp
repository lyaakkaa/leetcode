#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return helper(root, false);
    }

    int helper(TreeNode *root, bool ok){
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL && ok){
            return root->val;
        }
        return helper(root->left, true) + helper(root->right, false);
    }
};


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = 0;
        stack <TreeNode *> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            while(root){
                if(root->right != NULL){
                    st.push(root->right);
                }
                root = root -> left;
                if(root && root->left == NULL && root->right == NULL){
                    ans += root->val;
                }
            }
        }
        return ans;
        
    }
};


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int sum = 0;
        if(root->left != NULL){
            if(root->left->left == NULL && root->left->right == NULL){
                sum += root->left->val;
            }
            else{
                sum += sumOfLeftLeaves(root->left);
            }

        }
        if(root->right != NULL){
            if(root->right->left != NULL || root->right->right != NULL){
                sum += sumOfLeftLeaves(root->right);
            }
        }
        return sum;
        
    }
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        return recurs(root);
        
    }
    int recurs(TreeNode *node){
        if(node == NULL){
            return 0;
        }
        int sum = 0;
        if(node->left && node->left->left == NULL && node->left->right == NULL){
            sum += node->left->val;
        }
        return sum + recurs(node->left) + recurs(node->right);
    }
};

