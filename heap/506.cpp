#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue <int> pq;;

        map <int, string> mp;

        for(int i = 0; i < score.size(); i++){
            pq.push(score[i]);
        }
        for(int i = 0; i < score.size(); i++){
            if(i == 0){
                mp[pq.top()] = "Gold Medal";
            }
            else if(i == 1){
                mp[pq.top()] = "Silver Medal";
            }
            else if(i == 2){
                mp[pq.top()] = "Bronze Medal";
            }
            else{
                mp[pq.top()] = to_string(i + 1);
            }
            pq.pop();
        }

        vector <string> res;
        for(int i = 0; i < score.size(); i++){
            res.push_back(mp[score[i]]);
        }
        return res;
    }
};