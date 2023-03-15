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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            head = head->next;
        }
        if(head == NULL){
            return NULL;
        }
        ListNode *cur = head;
        ListNode *prev = NULL;
        while(cur != NULL){
            if(cur->val == val){
                prev->next = cur->next;
                cur = prev->next;
            }
            else{
                prev = cur;
                cur = cur->next;
            }

        }
        return head;
    }
};










// void del(int val){
//         if (head == NULL){
//             cout << "Linked List is empty";
//             return;
//         }
//         if (head -> val == val){
//             head = head -> next;
//         }
//         else{
//             Node * cur = head;
//             Node * prev = NULL;
//             while(cur != NULL){
//                 if (cur -> val == val){
//                     prev -> next = cur -> next;
//                     delete cur;
//                     return;
//                 }
//                 prev = cur;
//                 cur = cur -> next;
//             }
//             cout << "No such element " << val << endl;
//         }
//     }