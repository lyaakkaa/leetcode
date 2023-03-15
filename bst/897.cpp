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
    TreeNode *cur = new TreeNode(0);
    TreeNode *tmp = cur;
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        inOrder(root);
        return tmp->right;
    }
    void inOrder(TreeNode *node){
        if(node == NULL){
            return;
        }
        inOrder(node->left);
        cur->right = new TreeNode(node->val);
        cur->left = NULL;
        cur = cur ->right;
        inOrder(node->right);
    } 
};






class Solution {
public:
    vector <int> v;

    void inOrder(TreeNode *node){
        if(node == NULL){
            return;
        }
        inOrder(node->left);
        v.push_back(node->val);
        inOrder(node->right);
    }
    TreeNode *makeTree(){
        TreeNode *root = new TreeNode(-1);
        TreeNode *head = root;

        for(int i = 0; i < v.size(); i++){
            TreeNode *node = new TreeNode(v[i]);
            root->right = node;
            root = root->right;
        }
        return head->right;
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        inOrder(root);
        return makeTree();  
    }

};



class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        queue <TreeNode *> q;
        q.push(root);
        vector <int> v;

        while(!q.empty()){
            int s = q.size();

            for(int i = 0; i < s; i++){
                  
                q.pop();
                v.push_back(root->val);
                if(root->left){
                    q.push(root->left);
                }
                if(root->right){
                    q.push(root->right);
                }
            }
        }
        sort(v.begin(), v.end());
        TreeNode *ans = new TreeNode(-1);
        TreeNode *tmp = ans;

        for(int i = 0; i < v.size(); i++){
            ans->right = new TreeNode(v[i]);
            ans = ans->right;
        }
        return tmp->right;

    }
    
};



