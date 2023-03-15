#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1; 
        int r = n;
        int res = 0;
        while(l <= r){
            int m = l + (r - l) / 2;
            int c = (m / 2) * (m + 1);
            if(c > n){
                r = m - 1;
            }
            else{
                l = m + 1;
                res = max(m, res);
            }
            
        }
        return res;
    }
};