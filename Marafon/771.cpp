#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char, bool> mp; 
        for(int i = 0; i < jewels.size(); i++){
            mp[jewels[i]] = true;
        }
        int ans = 0;
        for(int i = 0; i < stones.size(); i++){
            if(mp[stones[i]]) ans++;
        }
        return ans;
    }

};