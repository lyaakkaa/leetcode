
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        ListNode *sechead = reverse(mid);

        

        while(head != NULL && sechead != NULL){
            if(head->val != sechead->val){
                return false;
            }
            head = head->next;
            sechead = sechead->next;
        }
        return true;
        
    }
    ListNode *middle(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode *reverse(ListNode *head){
        if(head == NULL){
            return head;
        }
        ListNode *cur = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
    
};









class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> st;
        ListNode *cur = head;
        while(cur != NULL){
            st.push(cur->val);
            cur = cur -> next;
        }
        while(head != NULL){
            if(head->val == st.top()){
                st.pop();
            }
            head = head -> next;
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
    
};