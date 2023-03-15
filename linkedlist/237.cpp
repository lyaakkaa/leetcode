#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete temp;
    }
};



class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *prev = NULL;

        while(node->next != NULL){
            node->val = node->next->val;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        delete node;
    }
};








