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
    vector<int> postorder(Node* root) {
        vector <int> ans;
        postOrder(root, ans);
        return ans;
        
    }

    void postOrder(Node *node, vector <int> &ans){
        if(node == NULL){
            return;
        }
        for(Node *child : node->children){
            postOrder(child, ans);
        }
        ans.push_back(node->val);
    }

};



class Solution {
public:
    vector<int> postorder(Node* root) {
        vector <int> ans;
        postOrder(root, ans);
        return ans;
        
    }

    void postOrder(Node *node, vector <int> &ans){
        if(node == NULL){
            return;
        }
        for(int i=0;i<node->children.size();i++){
			postOrder(node->children[i],ans);
		}
        ans.push_back(node->val);
    }

};
