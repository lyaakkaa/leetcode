

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode *f1 = head;
//         ListNode *f2 = head;

//         while(f1 != NULL && f1->next != NULL){
//             f1 = f1->next->next;
//             f2 = f2->next;

//             if(f1 == f2){
//                 return true;
//             }
            

//         }
//         return false;

//     }
// };