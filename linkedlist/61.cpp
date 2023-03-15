#include <bits/stdc++.h>
using namespace std;

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
    
    ListNode* rotateRight(ListNode* head, int k) {
      if(head == NULL)return head;
        ListNode * cur = head;
        int cnt =0;
        while(cur!=NULL){
            cnt++;
            cur = cur->next;
        }
    
      ListNode * slow = head ,* fast = head;
      int l = cnt;
      k = k%l;
      if(k == 0)return head;
      for(int i = 0 ; i<k;i++)fast = fast->next;
      while(fast->next)
      {
          fast = fast->next;
          slow = slow->next;
      }
      fast->next = head;
      head = slow->next;
      slow->next = NULL;
      return head;
      
        
    }
};




// Node* cyclicShift(Node* head, int k) {
//     // 
//     // the  ->   show  must -> go -> on -> head 
//     // head                         
//     //                   nh    
//     //            nt
//     //                                 tail 
//     Node *new_head = head;          
//     Node *new_tail = NULL;
//     for (int i = 0; i < k; i++) {
//         new_tail = new_head;
//         new_head = new_head->next;
//     }
//     Node *tail = head;
//     while (tail->next != NULL)
//         tail = tail->next;
    
//     tail->next = head;
//     new_tail->next = NULL;

//     return new_head;
// }