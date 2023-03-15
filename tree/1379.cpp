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
    TreeNode *ans=NULL;  //for storing the reference to required node.
    int val; //for storing the value we need to find
	
    void trav(TreeNode * root) //pre order traversal 
    {
        if(!root) return; // if root==NULL then return
        if(root->val==val) // if found
        {
            ans=root; //update global variable and return
            return;
        }
        trav(root->left); 
        trav(root->right);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
     val=target->val; //updating global variables to avoid passing on each function call
        trav(cloned); //traversing tree 
        return ans;
    }
};







TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        queue<TreeNode *> q;
        q.push(cloned);  //pushing elements to queue for BFS
        while(q.size())
        {
            int sz=q.size();
            // processing elements of queue one by one
            for(int i=0;i<sz;i++)
            {
                TreeNode *cur=q.front();
                q.pop();
                if(cur->val==target->val) return cur;// if found then return
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }
        return NULL; // considering case when not found. 
    };








class Solution {
public:
TreeNode *res;
    void find(TreeNode *root, TreeNode *target, TreeNode*& res){
        if(root == NULL){
            return;
        }
        if(root->val == target->val){
            res = root;
            return;
        }
        find(root->left, target, res);
        find(root->right, target, res);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        find(cloned, target, res);
        return res;
    }
};

