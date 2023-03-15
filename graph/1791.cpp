#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans = 0;
        for(int i = 0; i < edges.size(); i++){
            if(edges[i].size() == edges.size() - 1){
                ans = i;
            }
        }
        return ans;
        
    }
};