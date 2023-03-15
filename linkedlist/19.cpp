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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        int cnt = 0;
        ListNode *cur = head;
        while(cur != NULL){
            cur = cur->next;
            cnt++;
        }
        cur = head;
        
        for(int i = 1; i <= cnt; i++){
            if(cnt - n == 0){
                head = head->next;
                break;
            }
            if(cur->next == NULL){
                cur = NULL;
            }
            if(i == cnt - n){
                cur->next = cur->next->next;
                break;
            }
            cur = cur->next;
            
        }
        return head;
    }

    
};