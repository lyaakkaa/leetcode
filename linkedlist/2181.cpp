#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *cur = head;
        ListNode *newhead = new ListNode(-1);
        ListNode *temp = newhead;

        while(cur != NULL){
            if(cur->val == 0){
                cur = cur->next;
            }
            else{
                int sum = 0;
                while(cur->val != 0){
                    sum += cur->val;
                    cur = cur->next;
                }
                temp->next = new ListNode(sum);
                temp = temp->next;
            }
        }
        return newhead->next;
    }
};




class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *newhead = new ListNode(0);
        ListNode *temp = newhead;

        stack <int> st;

        ListNode *cur = head->next;
        int sum = 0;
        while(cur != NULL){
            if(cur->val == 0){
                sum = 0;
                while(!st.empty()){
                    sum += st.top();
                    st.pop();
                }
                temp->next = new ListNode(sum);
                temp = temp->next;
            }
            else{
                st.push(cur->val);
            }
            cur = cur->next;
        }
        return newhead->next;
    }
};