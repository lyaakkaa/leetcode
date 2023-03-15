#include <bits/stdc++.h>
using namespace std;


class MyHashMap {
public:
    struct ListNode {
        int key;
        int val;
        ListNode* next;     
        ListNode(int x) : key(x), val(0), next(NULL) {}
        ListNode(int x, int y) : key(x), val(y), next(NULL) {}
    };

    ListNode *head;

    MyHashMap() {
        head = new ListNode(-1);        
    }
    
    void put(int key, int value) {
        ListNode *node = new ListNode(key, value);
        ListNode *cur = head;
        while(cur->next != NULL){
            cur = cur->next;

            if(cur->key == key){
                cur->val = value;
                return;
            }
        }
        cur->next = node;
    }
    
    int get(int key) {
        ListNode *cur = head;
        while(cur != NULL){
            if(cur->key == key){
                return cur->val;
            }
            cur = cur->next;
        }
        return -1;
    }
    
    void remove(int key) {
        ListNode *curr = head;
        while(curr) {
            if(curr->next and curr->next->key == key) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
    }
};