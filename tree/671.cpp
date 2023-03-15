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
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL){
            return -1;
        }
        set <int> st;
        inOrder(root, st);
        set <int> :: iterator it;
        int ans = 0;
        int k = 0;
        if(st.size() == 1){
            return -1;
        }
        for(it = st.begin(); it != st.end(); it++){
            k++;
            ans = *it;
            if(k == 2){
                break;
            }
        }
        return ans;
        

    }
    void inOrder(TreeNode *node, set <int> &s){
        if(node == NULL){
            return;
        }
        inOrder(node->left, s);
        s.insert(node->val);
        inOrder(node->right, s);
    }
};




class Solution {
public:
    unsigned long long small = ULLONG_MAX;
    unsigned long long sec_small = ULLONG_MAX;

    int findSecondMinimumValue(TreeNode* root) {
        findsecmini(root);
        if(sec_small == ULLONG_MAX){
            return -1;
        }
        return sec_small;
    }

    void findsecmini(TreeNode *root){
        if(root == NULL){
            return;
        }
        if(root->val < small){
            sec_small = small;
            small = root->val;
        }
        else if(root->val < sec_small && root->val > small){
            sec_small = root->val;
        }
        findsecmini(root->left);
        findsecmini(root->right);

    }
    
};







class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        set<int> s;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                s.insert(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        }
        
        set<int> :: iterator it = s.begin();
        it++;
        
        if(it == s.end())
            return -1;
        return *it;
    }
};