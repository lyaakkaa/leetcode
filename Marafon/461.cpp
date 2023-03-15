#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while(x || y){
            if((x & 1) != (y & 1)){
                ans++;
            }
            x >>= 1;
            y >>= 1;
        }
        return ans;
    }
};


class Solution {
public:
    int hammingDistance(int x, int y) {

        int cnt =0;
        int run =32;
        
        while(run--){
            
            if((x&1)!=(y&1))
                cnt++;
            
            x = x>>1;
            y = y>>1;
            
        }
        
        return cnt;  
    }
};