#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        vector <int> v;
        for(int i = 0; i < n; i++){
            v.push_back(start + 2 * i);
            ans ^= v[i];
        }
        return ans;
        
    }
};