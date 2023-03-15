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
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int l_h = maxDepth(root->left);
        int r_h = maxDepth(root->right);
        return max(l_h, r_h) + 1;

    }
};












class Solution {
public:
    
int maxDepth(TreeNode* root){
	if(root == NULL)
		return 0;
	queue<TreeNode*> q;
	int cnt = 0;
	q.push(root);
	while(!q.empty()){
		int sz = q.size();
		for(int i=0; i<sz; i++){
			TreeNode* curr = q.front();
			q.pop();
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
		cnt++;
	}
	return cnt;
}
};