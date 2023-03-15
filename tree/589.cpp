#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<int> preorder(Node* root) {
        vector <int> ans;
        preOrder(root, ans);
        return ans;
        
    }

    void preOrder(Node *node, vector <int> &ans){
        if(node == NULL){
            return;
        }
        ans.push_back(node->val);
        for(int i=0;i<node->children.size();i++){
            
			preOrder(node->children[i],ans);
		}
        
    }
};

