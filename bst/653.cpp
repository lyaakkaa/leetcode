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
    bool findTarget(TreeNode* root, int k) {
        vector <int> vec;   
        int l = 0;
        int r = vec.size() - 1;

        while(l < r){
            if(vec[l] + vec[r] == k){
                return true;
            }
            else if(vec[l] + vec[r] < k){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
    }
    void inOrder(TreeNode *node, vector <int> &vec){
        if(node == NULL){
            return;
        }
        inOrder(node->left, vec);
        vec.push_back(node->val);
        inOrder(node->right, vec);
    }
};




class Solution {
public:
    map<int,int>mp;
    bool findTarget(TreeNode* root, int k){
        if(root == NULL){
            return false;
        }
        if(mp.find(k - root->val) != mp.end()){
            return true;
        }
        mp[root->val]++;
        return (findTarget(root->left, k) || findTarget(root->right, k));
    }
};



//BFS using Queue and Unordered_Set
bool findTarget(TreeNode* root, int k) {
	if(root and !root->left and !root->right) return false;
	queue<TreeNode*> q;
	unordered_set<int> s;
	q.push(root);
	while(!q.empty()){
		TreeNode* cur=q.front();
		q.pop();
		if(s.count(k-cur->val)) return true;
		s.insert(cur->val);
		if(cur->left) q.push(cur->left);
		if(cur->right) q.push(cur->right);
	}
	return false;
}

//DFS using Unordered_Set
unordered_set<int> s;
bool findTarget(TreeNode* root, int k) {
	if(root==NULL) return false;
	if(s.find(k-root->val)!=s.end()) return true;
	s.insert(root->val);
	return findTarget(root->left,k) || findTarget(root->right,k);
}