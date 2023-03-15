#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
       int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
        if(p->val <= root->val && q->val >= root->val){
            return root;
        }
        if(p->val >= root->val && q->val <= root->val){
            return root;
        }
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left, p, q);
        } 
        return lowestCommonAncestor(root->right, p, q); 
    }
};



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *cur = root;
        
        if(p->val < cur->val && q->val < cur->val){
            return lowestCommonAncestor(cur->left, p, q);
        }
        if(p->val > cur->val && q->val > cur->val){
            return lowestCommonAncestor(cur->right, p, q);
        }
        return cur;
    }
};



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return root;
        }
        queue <TreeNode*> qq;
        qq.push(root);

        TreeNode* ancestor = root;

        while(!qq.empty()){
            TreeNode *node = qq.front();
            qq.pop();

            if(node->val > p->val && node->val > q->val){
                ancestor = node->left;
                qq.push(node->left);
            }
            else if(node->val < p->val && node->val < q->val){
                ancestor = node->right;
                qq.push(node->right);
            }
            else if(node == p || node == q){
                ancestor = node;
            }
        }
        return ancestor;
    }
};