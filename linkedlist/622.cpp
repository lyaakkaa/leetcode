#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    ListNode *head = NULL;
    ListNode *tail = NULL;
    int cursz = 0;
    int sz = 0;

    MyCircularQueue(int k) {
        sz = k;
    }
    
    bool enQueue(int value) {
        if(cursz < sz){
            ListNode *node = new ListNode(value);
            if(head == NULL){
                head = tail = node;
            }
            else{
                tail->next = node;
                tail = node;
            }
            cursz++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(cursz > 0){
            ListNode *cur = head;
            head = head->next;
            cur->next = NULL;
            delete cur;
            cursz--;
            return true;
        }
        return false;
        
    }
    
    int Front() {
        if(cursz == 0){
            return -1;
        }
        return head->val; 
    }
    
    int Rear() {
        if(cursz == 0){
            return -1;
        }
        return tail->val;
        
    }
    
    bool isEmpty() {
        return cursz == 0;
    }
    
    bool isFull() {
        return cursz == sz;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */