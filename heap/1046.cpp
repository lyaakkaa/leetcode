#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int i = 0; i < stones.size(); i++){
            pq.push(stones[i]);
        }
        if(pq.size() == 1){
            return pq.top();
        }

        while(!pq.empty()){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a != b){
                pq.push(a - b);
            }
            if(pq.size() == 1){
                return pq.top();
            }
            
        }
        return 0;
        
        
    }
};