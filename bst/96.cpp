#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        return catalan_num(n);
    }
    int catalan_num(int n){
        int catalan[n + 1];
        catalan[0] = catalan[1] = 1;

        for(int i = 2; i <= n; i++){
            catalan[i] = 0;
            for(int j = 0; j < i; j++){
                catalan[i] += catalan[j] * catalan[i - j - 1];
            }

        }
        return catalan[n];
    }
};

class Solution {
public:
    int numTrees(int n) {
        int dp[n+2];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<n+1;i++){
            int k = i-1;
            int j = 0;
            dp[i] = 0;
            while(j<=k){
                dp[i] += dp[k-j]*dp[j];
                j++;
            }
        }
        return dp[n];
    }
};


// 1 - 1
// 2 - 2
// 3 - 5
// 