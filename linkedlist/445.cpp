// class Solution {
//     ListNode *reverse_list(ListNode *head){
//         ListNode * prev = NULL;
//         ListNode * cur = head;
//         while(cur){
//             ListNode * nxt = cur -> next;
         
//             cur -> next = prev; //меняем стрелочку в противоположную сторону 
//             prev = cur;
//             cur = nxt;
//         }
//         return prev;
//     }
    
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode * l3 = new ListNode(0);
//         ListNode * head = l3;
        
//         int carry = 0;
        
//         l1 = reverse_list(l1);
//         l2 = reverse_list(l2);
        
//         while(l1 && l2){
//             int value = l1 -> val + l2 -> val + carry;
//             carry = value / 10;
//             l3 -> next = new ListNode(value % 10);

//             l3 = l3 -> next;
//             l1 = l1 -> next;
//             l2 = l2 -> next;
//         }
//         while(l1){
//             int value = l1 -> val + carry;
//             carry = value / 10;
//             l3 -> next = new ListNode(value % 10);
 
//             l3 = l3 -> next;
//             l1 = l1 -> next;
//         }
//         while(l2){
//             int value = l2 -> val + carry;
//             carry = value / 10;
//             l3 -> next = new ListNode(value % 10);

//             l3 = l3 -> next;
//             l2 = l2 -> next;
//         }
//         if (carry) l3 -> next = new ListNode(carry);
        
       
//         return reverse_list(head -> next);
//     }
// };