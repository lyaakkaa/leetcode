#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;

        while(tickets[k] != 0){
            for(int i = 0; i < tickets.size(); i++){
                if(tickets[i] > 0){
                    tickets[i]--;
                    ans++;
                }
                if(i == k && tickets[i] == 0){
                    break;
                }
            }
        }
        return ans;
    }
};



class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue <int> q;
        for(int i = 0; i < tickets.size(); i++){
            q.push(tickets[i]);
        }
        int ans = 0;

        while(true){
            ans++;
            if(q.front() > 0){
                q.push(q.front());
            }
            else if(k == 0)
        }
    }
};



